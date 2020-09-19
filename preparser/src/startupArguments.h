#pragma once

#include "common.h"

class StartupArguments
{
public:
	void DisplayHelp();
	void Parse(int argc, const char* argv[]);

	const std::vector<std::string>& GetInputFiles() const { return mInputFiles; }
	std::string GetOutputDir()const { return mOutputDir; }
	std::string GetFilterFile()const { return mFilterFile; }
	std::string GetOuputName()const { return mOutputName; }

private:
	std::vector<std::string> mInputFiles;
	std::string mOutputDir;
	std::string mOutputName;
	std::string mFilterFile;
};