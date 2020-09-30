
#include <iostream>

#include "helper.h"
#include "startupArguments.h"
#include "filterParser.h"

int main(int argc, const char* argv[])
{
#ifdef DEBUG_ENABLE
	// Test
	//const std::string inputFile = "test.h";
	//const std::string filterFile = "filter.json"; // "filter.json";
	//FilterParser parser;
	//if (parser.Parse(inputFile, filterFile))
	//{
	//	parser.Generate("", "");
	//}

	const char* test_argv[] = { "hello", "-i", "geometry.h", "-f", "filter.json" };
	StartupArguments arguments;
	arguments.Parse(5, test_argv);

	const auto& inputFiles = arguments.GetInputFiles();
	for (const auto& inputFile : inputFiles)
	{
		FilterParser parser;
		if (parser.Parse(inputFile, arguments.GetFilterFile()))
		{
			parser.Generate(arguments.GetOutputDir(), arguments.GetOuputName());
		}
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