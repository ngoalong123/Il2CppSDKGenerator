#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitPendingMailcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitPendingMail>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& mailType() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(InitPendingMailcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x36BA724))(this, it);
	}

};

}