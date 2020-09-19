#include "filterParser.h"
#include "jsonArchive.h"

#include "antlr4-runtime.h"
#include "CPP14Lexer.h"
#include "CPP14Parser.h"
#include "CPP14ParserBaseVisitor.h"

#include <filesystem>

using namespace antlrcpptest;
using namespace antlr4;

namespace {
	void WriteBaseMetaInfo(const BaseMetaInfo& info, JsonArchive& archive)
	{
		archive.Write("name", info.mName);
		archive.PushMap("attributes", [&info] (JsonArchive& archive) {
			for (const auto& attribute : info.mAttributes) {
				archive.WriteAndPush(attribute);
			}
		});
		archive.Write("class", info.mClassName);
	}

	void WriteClassMetaInfo(const ClassMetaInfo& info, JsonArchive& archive)
	{
		WriteBaseMetaInfo(info, archive);
	}
}

bool FilterParser::Parse(const std::string& fileName, const std::string& filterName)
{
	std::cout << "Parse file:" << fileName << std::endl;
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

		ANTLRInputStream input(buffer);
		CPP14Lexer lexer(&input);
		CommonTokenStream tokens(&lexer);

		CPP14Parser parser(&tokens);
		tree::ParseTree* tree = parser.translationUnit();

		FilterParserVisitor visitor(*this);
		tree->accept(&visitor);
		mClassMetaInfoMap = visitor.GetClassMetaInfoMap();

		return true;
	}
    return false;
}

void FilterParser::Generate(const std::string& outputDir, const std::string& outputName)
{
	std::string outputFullPath = outputDir;
	std::string outputFileName = outputName;
	if (outputName.empty()) {
		outputFileName = mInputFileName;
	}
	outputFullPath = Helper::CombinePath(outputFullPath, outputFileName);

	std::cout << "Generate file:" << outputFullPath << std::endl;

	JsonArchive archive(outputFullPath, ArchiveMode::ArchiveMode_Write);
	{
		for (const auto& kvp : mClassMetaInfoMap)
		{
			auto& classMetaInfo = kvp.second;
			archive.PushMap("class", [&classMetaInfo](JsonArchive& archive) {
				archive.PushArray([&classMetaInfo](JsonArchive& archive)
				{
					WriteClassMetaInfo(classMetaInfo, archive);
				});
			});
		}
	}
}
