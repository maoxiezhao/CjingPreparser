#include "startupArguments.h"

#include <iostream>

void StartupArguments::DisplayHelp()
{
	std::cout << "*********************************************************************" << std::endl;
	std::cout << "Cjing Preparser v"   << Version::GetVersionString() << std::endl;
	std::cout << "*********************************************************************" << std::endl;
	std::cout << "usage: [Cmd] [Args]"       << std::endl;
	std::cout << "cmd arguments:"            << std::endl;
	std::cout << "-help  : display help"     << std::endl;
	std::cout << "-i [f] : input"            << std::endl;
	std::cout << "-od    : output directory" << std::endl;
	std::cout << "-on    : output name"      << std::endl;
	std::cout << "-f     : filter file"      << std::endl;
}

void StartupArguments::Parse(int argc, const char* argv[])
{
	if (argc <= 1)
	{
		DisplayHelp();
		return;
	}

	for (int i = 0; i < argc; i++)
	{
		std::string argCmd = argv[i];
		if (argCmd == "-help")
		{
			DisplayHelp();
		}
		else if (argCmd == "-i")
		{
			int fileIndex = i + 1;
			while (fileIndex < argc && argv[fileIndex][0] != '-')
			{
				mInputFiles.push_back(argv[fileIndex]);
				fileIndex++;
			}
			i = fileIndex;
		}
		else if (argCmd == "-od")
		{
			if (i < argc - 1)
			{
				mOutputDir = argv[i + 1];
			}
		}
		else if (argCmd == "-on")
		{
			if (i < argc - 1)
			{
				mOutputName = argv[i + 1];
			}
		}
		else if (argCmd == "-f")
		{
			if (i < argc - 1)
			{
				mFilterFile = argv[i + 1];
			}
		}
	}
}