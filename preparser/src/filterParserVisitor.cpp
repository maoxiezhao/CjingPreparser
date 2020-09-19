#include "filterParserVisitor.h"
#include "filterParser.h"

namespace {
	void ProcessAttribute(BaseMetaInfo& info, CPP14Parser::AttributeSpecifierSeqContext* ctx)
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
}

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
	
		auto baseSpecifierList = ctx->baseClause()->baseSpecifierList();
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

	if (ctx->memberDeclaratorList() == nullptr) {
		return nullptr;
	}

	auto declSeq = ctx->declSpecifierSeq();
	if (declSeq == nullptr) 
	{
		auto declartorContexts = ctx->memberDeclaratorList()->memberDeclarator();
		for (auto declartorContext : declartorContexts)
		{
			auto decl = declartorContext->declarator();
			auto declString = decl->getText();
			if (declString.find("(") != std::string::npos)
			{
				if (declString[0] != '~')
				{
					FunctionMetaInfo functionMetaInfo;
					ProcessAttribute(functionMetaInfo, ctx->attributeSpecifierSeq());
					if (!CheckMetaValid(functionMetaInfo, MetaType_Constructor)) {
						continue;
					}

					ProcessFunction(functionMetaInfo, decl, nullptr);

					functionMetaInfo.mClassName = mCurrentClassMeta->mName;
					mCurrentClassMeta->mConstructors.push_back(functionMetaInfo);
				}
			}
		}
	}
	else
	{
		auto declartorContexts = ctx->memberDeclaratorList()->memberDeclarator();
		for (auto declartorContext : declartorContexts)
		{
			auto decl = declartorContext->declarator();
			// TEMP: check is function
			if (decl->getText().find("(") != std::string::npos)
			{
				// function
				FunctionMetaInfo functionMetaInfo;
				ProcessAttribute(functionMetaInfo, ctx->attributeSpecifierSeq());
				if (!CheckMetaValid(functionMetaInfo, MetaType_Function)) {
					continue;
				}

				ProcessFunction(functionMetaInfo, decl, declSeq);
				
				functionMetaInfo.mClassName = mCurrentClassMeta->mName;
				mCurrentClassMeta->mMemberFunctions.push_back(functionMetaInfo);
			}
			else
			{
				// variable
				VariableMetaInfo variableMetaInfo;
				ProcessAttribute(variableMetaInfo, ctx->attributeSpecifierSeq());
				if (!CheckMetaValid(variableMetaInfo, MetaType_Varibales)) {
					continue;
				}

				ProcessVariable(variableMetaInfo, decl, declSeq);

				variableMetaInfo.mClassName = mCurrentClassMeta->mName;
				mCurrentClassMeta->mMemberVariables.push_back(variableMetaInfo);
			}
		}
	}

	return visitChildren(ctx);
}

void FilterParserVisitor::ProcessFunction(FunctionMetaInfo& info, CPP14Parser::DeclaratorContext* ctx, CPP14Parser::DeclSpecifierSeqContext* declSeq)
{
	if (ctx != nullptr)
	{
		auto decl = ctx->pointerDeclarator()->noPointerDeclarator();
		if (decl == nullptr) {
			return;
		}

		info.mName = decl->noPointerDeclarator()->getText();

		auto params = decl->parametersAndQualifiers();
		if (params != nullptr)
		{
			auto paramDeclClasu = params->parameterDeclarationClause();
			if (paramDeclClasu == nullptr) {
				return;
			}

			auto paramDeclList = paramDeclClasu->parameterDeclarationList();
			for (auto paramDecl : paramDeclList->parameterDeclaration())
			{
				auto declSeq = paramDecl->declSpecifierSeq()->declSpecifier();
				if (declSeq.size() <= 0) {
					continue;
				}

				VariableMetaInfo paramMetaInfo;
				paramMetaInfo.mType = declSeq[0]->getText();
				paramMetaInfo.mName = declSeq.size() > 1 ? declSeq[1]->getText() : "";

				info.mParamTypes.push_back(paramMetaInfo);
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

void FilterParserVisitor::ProcessVariable(VariableMetaInfo& info, CPP14Parser::DeclaratorContext* ctx, CPP14Parser::DeclSpecifierSeqContext* declSeq)
{
	if (ctx != nullptr) {
		info.mName = ctx->getText();
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
				info.mType = declString;
			}
		}
	}
}