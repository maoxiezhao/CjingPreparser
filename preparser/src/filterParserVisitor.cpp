#include "filterParserVisitor.h"
#include "filterParser.h"

FilterParserVisitor::FilterParserVisitor(FilterParser& parser) :
	mParser(parser)
{
}

bool FilterParserVisitor::CheckMetaValid(BaseMetaInfo& info, MetaType metaType)
{
	std::string currentAttribute = info.mAttributes.empty() ? "" : info.mAttributes[0];
	std::string filterAttribute = "";

	FilterInfo filterInfo = mParser.GetFilterInfo();
	switch (metaType)
	{
	case MetaType_Class:
		filterAttribute = filterInfo.mClassFilter;
		break;
	case MetaType_Function:
		filterAttribute = filterInfo.mFunctionFilter;
		break;
	case MetaType_Varibales:
		filterAttribute = filterInfo.mVariableFilter;
		break;
	case MetaType_Constructor:
		filterAttribute = filterInfo.mConstructorFilter;
		break;
	default:
		break;
	}

	if (filterAttribute != "" && filterAttribute != currentAttribute) {
		return false;
	}

	return true;
}

antlrcpp::Any FilterParserVisitor::visitClassHead(CPP14Parser::ClassHeadContext* ctx)
{
	mCurrentClassMeta = nullptr;

	ClassMetaInfo newClassInfo;
	{
		// 先处理attribute，如果存在attribute filter，则直接返回不往子节点遍历
		ProcessAttribute(newClassInfo, ctx->attributeSpecifierSeq());
		if (!CheckMetaValid(newClassInfo, MetaType_Class))
		{
			return nullptr;
		}

		newClassInfo.mName = ctx->classHeadName()->getText();
	
		auto baseSpecifierList = ctx->baseClause() ? ctx->baseClause()->baseSpecifierList() : nullptr;
		if (baseSpecifierList != nullptr)
		{
			for (auto baseSpecifier : baseSpecifierList->baseSpecifier()) {
				newClassInfo.mBaseClassNames.push_back(baseSpecifier->baseTypeSpecifier()->getText());
			}
		}

		if (newClassInfo.mName != "")
		{
			mClassMetaMap[newClassInfo.mName] = newClassInfo;
			mCurrentClassMeta = &mClassMetaMap[newClassInfo.mName];
		}
	}

	return visitChildren(ctx);
}

antlrcpp::Any FilterParserVisitor::visitMemberdeclaration(CPP14Parser::MemberdeclarationContext* ctx)
{
	if (mCurrentClassMeta == nullptr) {
		return nullptr;
	}

	if (ctx->functionDefinition() != nullptr)
	{
		ProcessMemberDeclaratorContext(
			ctx->functionDefinition()->declarator(), 
			ctx->functionDefinition()->declSpecifierSeq(),
			ctx->functionDefinition()->attributeSpecifierSeq());
	}
	else if (ctx->memberDeclaratorList() != nullptr)
	{
		auto declartorContexts = ctx->memberDeclaratorList()->memberDeclarator();
		for (auto declartorContext : declartorContexts)
		{
			ProcessMemberDeclaratorContext(
				declartorContext->declarator(), 
				ctx->declSpecifierSeq(),
				ctx->attributeSpecifierSeq());
		}
	}
	else if (ctx->declSpecifierSeq() != nullptr)
	{
		ProcessMemberDeclaratorContext(
			nullptr,
			ctx->declSpecifierSeq(),
			ctx->attributeSpecifierSeq());
	}
	return nullptr;
}

void FilterParserVisitor::ProcessMemberDeclaratorContext(
	CPP14Parser::DeclaratorContext* ctx, 
	CPP14Parser::DeclSpecifierSeqContext* declSeq,
	CPP14Parser::AttributeSpecifierSeqContext* attributeCtx)
{
	if (declSeq == nullptr)
	{
		// 如果没有类型声明，则仅考虑是否是构造函数
		auto declString = ctx != nullptr ? ctx->getText() : "";
		if (declString.find("(") != std::string::npos)
		{
			if (declString[0] != '~')
			{
				// constructor
				FunctionMetaInfo functionMetaInfo;
				ProcessAttribute(functionMetaInfo, attributeCtx);
				if (!CheckMetaValid(functionMetaInfo, MetaType_Constructor)) {
					return;
				}

				ProcessMemberFunction(functionMetaInfo, ctx, nullptr);

				functionMetaInfo.mClassName = mCurrentClassMeta->mName;
				mCurrentClassMeta->mConstructors.push_back(functionMetaInfo);
			}
		}
	}
	else
	{
		auto declString = ctx != nullptr ? ctx->getText() : "";
		if (declString.find("(") != std::string::npos)
		{
			// function
			FunctionMetaInfo functionMetaInfo;
			ProcessAttribute(functionMetaInfo, attributeCtx);
			if (!CheckMetaValid(functionMetaInfo, MetaType_Function)) {
				return;
			}

			ProcessMemberFunction(functionMetaInfo, ctx, declSeq);

			functionMetaInfo.mClassName = mCurrentClassMeta->mName;
			mCurrentClassMeta->mMemberFunctions.push_back(functionMetaInfo);
		}
		else
		{
			// variable
			VariableMetaInfo variableMetaInfo;
			ProcessAttribute(variableMetaInfo, attributeCtx);
			if (!CheckMetaValid(variableMetaInfo, MetaType_Varibales)) {
				return;
			}

			ProcessMemberVariable(variableMetaInfo, ctx, declSeq);

			variableMetaInfo.mClassName = mCurrentClassMeta->mName;
			mCurrentClassMeta->mMemberVariables.push_back(variableMetaInfo);
		}
	}
}

void FilterParserVisitor::ProcessAttribute(BaseMetaInfo& info, CPP14Parser::AttributeSpecifierSeqContext* ctx)
{
	if (ctx == nullptr) {
		return;
	}

	for (auto attribute : ctx->attributeSpecifier())
	{
		if (attribute != nullptr)
		{
			auto attributeString = attribute->getText();
			if (attributeString.length() > 4) {
				attributeString = attributeString.substr(2, attributeString.length() - 4);
			}
			info.mAttributes.push_back(attributeString);
		}
	}
}

void FilterParserVisitor::ProcessMemberFunction(FunctionMetaInfo& info, CPP14Parser::DeclaratorContext* ctx, CPP14Parser::DeclSpecifierSeqContext* declSeq)
{
	if (ctx != nullptr)
	{
		auto pointerDecl = ctx->pointerDeclarator();
		auto noPointerDecl = pointerDecl->noPointerDeclarator();

		if (noPointerDecl != nullptr) {
			info.mName = noPointerDecl->noPointerDeclarator()->getText();
		}

		auto params = noPointerDecl->parametersAndQualifiers();
		if (params != nullptr)
		{
			auto paramDeclClasu = params->parameterDeclarationClause();
			if (paramDeclClasu != nullptr) 
			{
				auto paramDeclList = paramDeclClasu->parameterDeclarationList();
				for (auto paramDecl : paramDeclList->parameterDeclaration())
				{
					VariableMetaInfo paramMetaInfo;
					ProcessMemberVariable(paramMetaInfo, paramDecl->declarator(), paramDecl->declSpecifierSeq());
					info.mParamTypes.push_back(paramMetaInfo);
				}
			}

			if (params->cvqualifierseq() != nullptr) {
				info.mIsConst = true;
			}
		}
	}
	if (declSeq != nullptr)
	{
		for (auto decl : declSeq->declSpecifier())
		{
			auto declString = decl->getText();
			if (declString == "const")
			{
				info.mIsRetConst = true;
			}
			else if (declString == "static")
			{
				info.mIsStaic = true;
			}
			else if (declString == "virtual")
			{
				info.mIsVirtual = true;
			}
			else
			{
				info.mRetType = declString;
			}
		}
	}
}

void FilterParserVisitor::ProcessMemberVariable(VariableMetaInfo& info, CPP14Parser::DeclaratorContext* ctx, CPP14Parser::DeclSpecifierSeqContext* declSeq)
{
	if (ctx != nullptr) {
		auto noPointerDecl = ctx->noPointerDeclarator();
		if (noPointerDecl != nullptr)
		{
			info.mName = noPointerDecl->getText();
		}
		else
		{
			auto pointerDecl = ctx->pointerDeclarator();
			if (pointerDecl != nullptr)
			{
				info.mName = pointerDecl->noPointerDeclarator()->getText();
				if (pointerDecl->pointerOperator().size() > 0) {
					info.mIsPointer = true;
				}
			}
		}
	}
	if (declSeq != nullptr)
	{
		for (auto decl : declSeq->declSpecifier())
		{
			auto declString = decl->getText();
			if (declString == "const")
			{
				info.mIsConst = true;
			}
			else if (declString == "static")
			{
				info.mIsStaic = true;
			}
			else
			{
				if (info.mType.empty())
				{
					info.mType = declString;
				}
				else if (info.mName.empty())
				{
					info.mName = declString;
				}
			}
		}
	}
}