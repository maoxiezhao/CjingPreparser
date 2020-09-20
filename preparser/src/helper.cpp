#include "helper.h"

#include <fstream>
#include <filesystem>

bool Helper::FileRead(const std::string& fileName, U8* data, size_t& size)
{
	std::ifstream file(fileName, std::ios::binary | std::ios::ate);
	if (file.is_open())
	{
		size = (size_t)file.tellg();
		file.seekg(0, file.beg);
		data = new U8[size];
		file.read((char*)data, size);
		file.close();
		return true;
	}
    return false;
}

bool Helper::FileRead(const std::string& fileName, std::string& data)
{
	std::ifstream file(fileName, std::ios::binary | std::ios::ate);
	if (file.is_open())
	{
		size_t dataSize = (size_t)file.tellg();
		file.seekg(0, file.beg);
		data.resize(dataSize);
		file.read((char*)data.data(), dataSize);
		file.close();
		return true;
	}
	return false;
}

bool Helper::FileWrite(const std::string& fileName, const uint8_t* data, size_t size)
{
	if (data == nullptr || size <= 0) {
		return false;
	}

	std::ofstream file(fileName, std::ios::binary | std::ios::trunc);
	if (file.is_open())
	{
		file.write((const char*)data, (std::streamsize)size);
		file.close();
		return true;
	}

    return false;
}

bool Helper::IsFileExists(const std::string& fileName)
{
	std::ifstream file(fileName);
	bool exists = file.is_open();
	file.close();
	return exists;
}

std::string Helper::CombinePath(const std::string& path1, const std::string& path2)
{
	if (path1.empty()) {
		return path2;
	}
	if (path2.empty()) {
		return path1;
	}

	std::filesystem::path path(path1);
	return path.append(path2).string();
}

std::string Helper::RemoveExtension(const std::string& path)
{
	std::filesystem::path filePath(path);
	return filePath.replace_extension().string();
}
