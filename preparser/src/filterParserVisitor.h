#pragma once

#include "classMetaInfo.h"
#include "helper.h"
#include "CPP14ParserBaseVisitor.h"

class FilterParser;

using namespace antlrcpptest;

class FilterParserVisitor : public antlrcpptest::CPP14ParserBaseVisitor
{
private:
	FilterParser& mParser;
	ClassMetaInfo* mCurrentClassMeta = nullptr;
	std::map<std::string, ClassMetaInfo> mClassMetaMap;

public:
	FilterParserVisitor(FilterParser& parser);

	bool CheckMetaValid(BaseMetaInfo& info, MetaType metaType);
	const std::map<std::string, ClassMetaInfo>& GetClassMetaInfoMap()const { return mClassMetaMap; }

public:
	virtual antlrcpp::Any visitClassHead(CPP14Parser::ClassHeadContext* ctx) override;
	virtual antlrcpp::Any visitMemberdeclaration(CPP14Parser::MemberdeclarationContext* ctx) override;

private:
	void ProcessAttribute(BaseMetaInfo& info, CPP14Parser::AttributeSpecifierSeqContext* ctx);
	void ProcessMemberDeclaratorContext(CPP14Parser::DeclaratorContext* ctx, CPP14Parser::DeclSpecifierSeqContext* declSeq, CPP14Parser::AttributeSpecifierSeqContext* attributeCtx);
	void ProcessMemberFunction(FunctionMetaInfo& info, CPP14Parser::DeclaratorContext* ctx, CPP14Parser::DeclSpecifierSeqContext* declSeq);
	void ProcessMemberVariable(VariableMetaInfo& info, CPP14Parser::DeclaratorContext* ctx, CPP14Parser::DeclSpecifierSeqContext* declSeq);
};