
#include <iostream>

#include "helper.h"
#include "startupArguments.h"
#include "filterParser.h"

int main(int argc, const char* argv[])
{
#ifdef DEBUG_ENABLE
	// Test
	const std::string inputFile = "test.h";
	const std::string filterFile = "filter.json";
	FilterParser parser;
	if (parser.Parse(inputFile, filterFile))
	{
		parser.Generate("", "");
	}
#else
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
#endif

	return 0;
}