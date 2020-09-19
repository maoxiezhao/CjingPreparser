
#include <iostream>
#include <Windows.h>

#include "helper.h"
#include "startupArguments.h"
#include "filterParser.h"

int main(int argc, const char* argv[])
{
	StartupArguments arguments;
	arguments.Parse(argc, argv);

	const auto& inputFiles = arguments.GetInputFiles();
	for (const auto& inputFile : inputFiles)
	{
		FilterParser parser;
		if (parser.Parse(inputFile, arguments.GetFilterFile()))
		{
			parser.Generate(arguments.GetOutputDir(), arguments.GetOuputName());
		}
	}

	// Test
	const std::string inputFile = "test.h";
	const std::string filterFile = "filter.json";
	FilterParser parser;
	if (parser.Parse(inputFile, filterFile))
	{
		parser.Generate("", "generate.json");
	}


	return 0;
}