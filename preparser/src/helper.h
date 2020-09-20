#pragma once

#include "common.h"

namespace Helper
{
	bool FileRead(const std::string& fileName, U8* data, size_t& size);
	bool FileRead(const std::string& fileName, std::string& data);
	bool FileWrite(const std::string& fileName, const uint8_t* data, size_t size);
	bool IsFileExists(const std::string& fileName);
	std::string CombinePath(const std::string& path1, const std::string& path2);
	std::string RemoveExtension(const std::string& path);
}