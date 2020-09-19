#include "jsonArchive.h"
#include "helper.h"

#include <iostream>

ArchiveBase::ArchiveBase(const std::string& path, ArchiveMode mode) :
	mFilePath(path),
	mMode(mode)
{
}

ArchiveBase::~ArchiveBase()
{
	Close();
}

bool ArchiveBase::IsOpen() const
{
	return mDataBuffer != nullptr;
}

void ArchiveBase::Close()
{
	if (!mIsLoadFromMemory) {
		SAFE_DELETE_ARRAY(mDataBuffer);
	}
	mDataBuffer = nullptr;
	mDataSize = 0;
}

bool ArchiveBase::Load(const std::string& path)
{
	if (!Helper::IsFileExists(mFilePath)) {
		return false;
	}

	size_t size;
	if (!Helper::FileRead(path, (U8*)mDataBuffer, size)) {
		return false;
	}

	mDataSize = (U32)size;
	return true;
}

bool ArchiveBase::LoadFromMemory(std::string& buffer)
{
	mDataSize   = (U32)buffer.size();
	mDataBuffer = (char*)buffer.data();
	mIsLoadFromMemory = true;
	return true;
}

bool ArchiveBase::Save(const std::string& path)
{
	if (mFilePath.empty()) {
		return false;
	}

	return Helper::FileWrite(mFilePath, (U8*)mDataBuffer, static_cast<size_t> (mDataSize));
}

const U32 JsonArchive::currentArchiveVersion = 1;

JsonArchive::JsonArchive(ArchiveMode mode) :
	ArchiveBase("", mode)
{
}

JsonArchive::JsonArchive(const std::string& path, ArchiveMode mode) :
	ArchiveBase(path, mode)
{
	OnLoad();
}

JsonArchive::~JsonArchive()
{
	OnUnload();
}

void JsonArchive::OnLoad()
{
	if (mMode == ArchiveMode::ArchiveMode_Read)
	{
		if (!Load(mFilePath)) {
			return;
		}
		try
		{
			mRootJson = nlohmann::json::parse(mDataBuffer, mDataBuffer + mDataSize);
		}
		catch (const std::exception& e)
		{
			std::cout << "Warning:Filed to open json file:" << mFilePath << " ," << e.what();
			Close();
			return;
		}
	}
}

void JsonArchive::OnUnload()
{
	while (!mJsonStack.empty()) {
		mJsonStack.pop();
	}

	if (mMode == ArchiveMode::ArchiveMode_Write) {
		Save(mFilePath);
	}
}

bool JsonArchive::LoadFromMemory(std::string& buffer)
{
	ArchiveBase::LoadFromMemory(buffer);
	try
	{
		mRootJson = nlohmann::json::parse(mDataBuffer, mDataBuffer + mDataSize);
	}
	catch (const std::exception& e)
	{
		std::cout << "Warning:Filed to open json file:" << mFilePath << " ," << e.what();
		return false;
	}

	return true;
}

bool JsonArchive::Save(const std::string& path)
{
	std::string string = mRootJson.dump(4);
	if (string.empty()) {
		return false;
	}

	return Helper::FileWrite(path, (U8*)string.data(), string.size());
}

nlohmann::json* JsonArchive::GetCurrentJson()
{
	if (mJsonStack.empty()) {
		return &mRootJson;
	}
	return mJsonStack.top();
}

const nlohmann::json* JsonArchive::GetCurrentJson() const
{
	if (mJsonStack.empty()) {
		return &mRootJson;
	}
	return mJsonStack.top();
}

size_t JsonArchive::GetCurrentValueCount() const
{
	return GetCurrentJson()->size();
}
