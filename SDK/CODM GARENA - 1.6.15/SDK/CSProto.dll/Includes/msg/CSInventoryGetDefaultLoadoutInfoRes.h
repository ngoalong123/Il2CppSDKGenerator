#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryGetDefaultLoadoutInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryGetDefaultLoadoutInfoRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _loadout_batch() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventoryGetDefaultLoadoutInfoRes*))(Il2CppBase() + 0x5137D9C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventoryGetDefaultLoadoutInfoRes*, int32_t))(Il2CppBase() + 0x5137DA4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_loadout_batch() {
		return ((T (*)(CSInventoryGetDefaultLoadoutInfoRes*))(Il2CppBase() + 0x5137DAC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryGetDefaultLoadoutInfoRes*, bool))(Il2CppBase() + 0x5137DB4))(this, createIfMissing);
	}

};

}