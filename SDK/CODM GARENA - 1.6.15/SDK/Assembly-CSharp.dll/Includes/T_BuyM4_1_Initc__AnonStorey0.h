#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TBuyM41InitcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<T_BuyM4_1_Init>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(TBuyM41InitcAnonStorey0*))(Il2CppBase() + 0x23C7C4C))(this);
	}

};

}