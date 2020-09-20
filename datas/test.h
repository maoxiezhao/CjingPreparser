#pragma once

#include "system\component\componentInclude.h"

namespace Cjing3D {

	class [[LUA_BINDER_REGIST]] [[description("Jolly")]] TransformComponent : public Component, public BaseObject
	{
	public:
		[[LUA_BINDER_REGIST]]
		TransformComponent();

		[[LUA_BINDER_REGIST]]
		virtual static const int Create(const std::string& name);

		[[LUA_BINDER_REGIST]]
		virtual const int GetValue()const override { return v; }

		[[LUA_BINDER_REGIST]]
		void SetValue(const int& v) { mValue = v; }

	private:
		XMFLOAT3 mTranslationLocal = XMFLOAT3(0.0f, 0.0f, 0.0f);
		XMFLOAT4 mRotationLocal = XMFLOAT4(0.0f, 0.0f, 0.0f, 1.0f);
		XMFLOAT3 mScaleLocal = XMFLOAT3(1.0f, 1.0f, 1.0f);
		XMFLOAT4X4 mWorldTransform = IDENTITYMATRIX;
		int mValue = 10;

		[[LUA_BINDER_REGIST]]
		bool* mIsDirty = true;
	};
}