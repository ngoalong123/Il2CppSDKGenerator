#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRSettlementConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRSettlementConfig"));
	}

	template <typename T = int32_t> T& GameMode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& IconResource() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BRSettlementConfig*))(Il2CppBase() + 0x2D544A4))(this);
	}
	template <typename T = int32_t> T get_GameMode() {
		return ((T (*)(BRSettlementConfig*))(Il2CppBase() + 0x2D54544))(this);
	}
	template <typename T = void> T set_GameMode(int32_t value) {
		return ((T (*)(BRSettlementConfig*, int32_t))(Il2CppBase() + 0x2D5454C))(this, value);
	}
	template <typename T = Il2CppString*> T get_IconResource() {
		return ((T (*)(BRSettlementConfig*))(Il2CppBase() + 0x2D54554))(this);
	}
	template <typename T = void> T set_IconResource(Il2CppString* value) {
		return ((T (*)(BRSettlementConfig*, Il2CppString*))(Il2CppBase() + 0x2D5455C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRSettlementConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D54564))(this, bytes, position);
	}

};

}