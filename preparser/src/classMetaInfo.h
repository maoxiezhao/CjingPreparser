#pragma once

#include "common.h"

enum MetaType
{
	MetaType_Class,
	MetaType_Function,
	MetaType_Varibales,
	MetaType_Constructor,
};

struct BaseMetaInfo
{
	std::string mName;
	std::vector<std::string> mAttributes;
	std::string mClassName;
};

struct VariableMetaInfo : BaseMetaInfo
{
	std::string mType;
	bool mIsStaic = false;
	bool mIsConst = false;
	bool mIsPointer = false;
};

struct FunctionMetaInfo : BaseMetaInfo
{
	std::vector<VariableMetaInfo> mParamTypes;
	std::string mRetType;
	bool mIsRetConst = false;
	bool mIsStaic = false;
	bool mIsVirtual = false;
	bool mIsConst = false;
};

struct ClassMetaInfo : BaseMetaInfo
{
	std::vector<std::string> mBaseClassNames;
	std::vector<FunctionMetaInfo> mConstructors;
	std::vector<VariableMetaInfo> mMemberVariables;
	std::vector<FunctionMetaInfo> mMemberFunctions;
};