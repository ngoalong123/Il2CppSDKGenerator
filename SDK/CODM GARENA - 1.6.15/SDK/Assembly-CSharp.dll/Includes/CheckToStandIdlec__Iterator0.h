#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckToStandIdlecIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CheckToStandIdle>c__Iterator0"));
	}

	template <typename T = float> T& t__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(CheckToStandIdlecIterator0*))(Il2CppBase() + 0x1DF719C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(CheckToStandIdlecIterator0*))(Il2CppBase() + 0x1DF749C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CheckToStandIdlecIterator0*))(Il2CppBase() + 0x1DF74A4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(CheckToStandIdlecIterator0*))(Il2CppBase() + 0x1DF74AC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CheckToStandIdlecIterator0*))(Il2CppBase() + 0x1DF74C0))(this);
	}

};

}