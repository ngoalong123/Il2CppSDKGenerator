#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Monster {

class CUSTFArgEX
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Monster", "CUSTFArgEX"));
	}

	template <typename T = Il2CppString*> T& EleName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& title() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& bClamp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Min() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Max() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Name() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Title() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Info() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetType() {
		return ((T (*)(CUSTFArgEX*))(Il2CppBase() + 0x331B8DC))(this);
	}
	template <typename T = Il2CppString*> T Name() {
		return ((T (*)(CUSTFArgEX*))(Il2CppBase() + 0x331B9D0))(this);
	}
	template <typename T = Il2CppString*> T Title() {
		return ((T (*)(CUSTFArgEX*))(Il2CppBase() + 0x331BAA0))(this);
	}
	template <typename T = Il2CppString*> T Info() {
		return ((T (*)(CUSTFArgEX*))(Il2CppBase() + 0x331BB70))(this);
	}
	template <typename T = uintptr_t> T GetValue(uintptr_t inSrc) {
		return ((T (*)(CUSTFArgEX*, uintptr_t))(Il2CppBase() + 0x335AFFC))(this, inSrc);
	}
	template <typename T = void> T SetValue(uintptr_t inDist, uintptr_t inV) {
		return ((T (*)(CUSTFArgEX*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E8923C))(this, inDist, inV);
	}

};

}