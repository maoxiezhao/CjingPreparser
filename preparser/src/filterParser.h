#pragma once

#include "common.h"
#include "filterParserVisitor.h"

struct FilterInfo
{
	std::string mClassFilter = "";
	std::string mConstructorFilter = "";
	std::string mFunctionFilter = "";
	std::string mVariableFilter = "";
};

class FilterParser
{
public:
	bool Parse(const std::string& fileName, const std::string& filterName);
	void Generate(const std::string& outputDir, const std::string& outputName);

	const FilterInfo& GetFilterInfo()const { return mFilterInfo; }

private:
	FilterInfo mFilterInfo;
	std::string mInputFileName;
	std::map<std::string, ClassMetaInfo> mClassMetaInfoMap;
};