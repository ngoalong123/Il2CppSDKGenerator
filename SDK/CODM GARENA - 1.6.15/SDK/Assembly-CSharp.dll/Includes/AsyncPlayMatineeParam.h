#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AsyncPlayMatineeParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AsyncPlayMatineeParam"));
	}

	template <typename T = uintptr_t> T& matineeSequence() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& finishCallback() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& playbackRate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isReset() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& resetTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& blendInTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}