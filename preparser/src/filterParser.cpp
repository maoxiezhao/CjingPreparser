#include "filterParser.h"
#include "jsonArchive.h"

#include "antlr4-runtime.h"
#include "CPP14Lexer.h"
#include "CPP14Parser.h"
#include "CPP14ParserBaseVisitor.h"

#include <vector>

using namespace antlrcpptest;
using namespace antlr4;

namespace {
	void WriteBaseMetaInfo(const BaseMetaInfo& info, JsonArchive& archive)
	{
		archive.Write("name", info.mName);
		archive.PushMap("attributes", [&info](JsonArchive& archive) {
			for (const auto& attribute : info.mAttributes) {
				archive.WriteAndPush(attribute);
			}
			});
		archive.Write("class", info.mClassName);
	}

	void WriteVariableMetaInfo(const VariableMetaInfo& info, JsonArchive& archive)
	{
		WriteBaseMetaInfo(info, archive);

		archive.Write("type", info.mType);
		archive.Write("is_static",  info.mIsStaic);
		archive.Write("is_const",   info.mIsConst);
		archive.Write("is_pointer", info.mIsPointer);
	}

	void WriteFunctionMetaInfo(const FunctionMetaInfo& info, JsonArchive& archive)
	{
		WriteBaseMetaInfo(info, archive);

		archive.Write("ret_type", info.mRetType);
		archive.Write("is_ret_const", info.mIsRetConst);
		archive.Write("is_static", info.mIsStaic);
		archive.Write("is_const", info.mIsConst);

		archive.PushMap("params", [&info](JsonArchive& archive) {
			for (const auto& paramMetaInfo : info.mParamTypes)
			{
				archive.PushArray([&paramMetaInfo](JsonArchive& archive) {
					WriteVariableMetaInfo(paramMetaInfo, archive);
				});
			}
		});
	}

	void WriteClassMetaInfo(const ClassMetaInfo& info, JsonArchive& archive)
	{
		WriteBaseMetaInfo(info, archive);

		archive.PushMap("constuctors", [&info](JsonArchive& archive) {
			for (const auto& funcMetaInfo : info.mConstructors)
			{
				archive.PushArray([&funcMetaInfo](JsonArchive& archive) {
					WriteFunctionMetaInfo(funcMetaInfo, archive);
				});
			}
		});

		archive.PushMap("member_function", [&info](JsonArchive& archive) {
			for (const auto& funcMetaInfo : info.mMemberFunctions)
			{
				archive.PushArray([&funcMetaInfo](JsonArchive& archive) {
					WriteFunctionMetaInfo(funcMetaInfo, archive);
				});		
			}
		});

		archive.PushMap("member_variables", [&info](JsonArchive& archive) {
			for (const auto& variableMetaInfo : info.mMemberVariables)
			{
				archive.PushArray([&variableMetaInfo](JsonArchive& archive) {
					WriteVariableMetaInfo(variableMetaInfo, archive);
				});
			}
		});
	}
}

bool FilterParser::Parse(const std::string& fileName, const std::string& filterName)
{
	std::cout << "Parsing C++ head file:" << fileName << "..." << std::endl;
	if (Helper::IsFileExists(filterName))
	{
		std::string buffer;
		if (Helper::FileRead(filterName, buffer))
		{
			JsonArchive archive(ArchiveMode::ArchiveMode_Read);
			if (archive.LoadFromMemory(buffer))
			{
				archive.Read("filter_class",       mFilterInfo.mClassFilter);
				archive.Read("filter_constructor", mFilterInfo.mConstructorFilter);
				archive.Read("filter_function",    mFilterInfo.mFunctionFilter);
				archive.Read("filter_variable",    mFilterInfo.mVariableFilter);
			}
		}
	}

	if (Helper::IsFileExists(fileName))
	{
		std::string buffer;
		if (!Helper::FileRead(fileName, buffer))
		{
			return false;
		}
		mInputFileName = fileName;

		// check the file with filter
		bool isAvailable = false;
		std::vector<std::string> filterArray = mFilterInfo.GetFilterArray();
		for (const auto& fillter : filterArray)
		{
			if (buffer.find(fillter) != std::string::npos)
			{
				isAvailable = true;
				break;
			}
		}

		if (isAvailable)
		{
			ANTLRInputStream input(buffer);
			CPP14Lexer lexer(&input);
			CommonTokenStream tokens(&lexer);

			CPP14Parser parser(&tokens);
			tree::ParseTree* tree = parser.translationUnit();

			FilterParserVisitor visitor(*this);
			tree->accept(&visitor);
			mClassMetaInfoMap = visitor.GetClassMetaInfoMap();
		}

		return true;
	}
	std::cout << "File generation failed" << std::endl;
    return false;
}

void FilterParser::Generate(const std::string& outputDir, const std::string& outputName)
{
	std::string outputFullPath = outputDir;
	std::string outputFileName = outputName;
	if (outputName.empty()) {
		outputFileName = Helper::RemoveExtension(mInputFileName) + ".json";
	}
	outputFullPath = Helper::CombinePath(outputFullPath, outputFileName);

	char msg[128];
	sprintf(msg, "File generated successfully:%s", outputFullPath.c_str());
	std::cout << msg << std::endl;

	JsonArchive archive(outputFullPath, ArchiveMode::ArchiveMode_Write);
	{
		for (const auto& kvp : mClassMetaInfoMap)
		{
			auto& classMetaInfo = kvp.second;
			archive.Write("head_name", mInputFileName);
			archive.PushMap("class", [&classMetaInfo](JsonArchive& archive) {
				archive.PushArray([&classMetaInfo](JsonArchive& archive)
				{
					WriteClassMetaInfo(classMetaInfo, archive);
				});
			});
		}
	}
}