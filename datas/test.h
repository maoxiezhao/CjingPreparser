#pragma once

#include "system\component\componentInclude.h"

namespace Cjing3D {

	class [[LUA_BINDER_REGIST]] [[description("Jolly")]] TransformComponent : public Component, public BaseObject
	{
	public:
		TransformComponent();

		static const int TestFunction(int a, int b);

	private:
		XMFLOAT3 mTranslationLocal = XMFLOAT3(0.0f, 0.0f, 0.0f);
		XMFLOAT4 mRotationLocal = XMFLOAT4(0.0f, 0.0f, 0.0f, 1.0f);
		XMFLOAT3 mScaleLocal = XMFLOAT3(1.0f, 1.0f, 1.0f);
		XMFLOAT4X4 mWorldTransform = IDENTITYMATRIX;

		bool mIsDirty = true;
	};
}