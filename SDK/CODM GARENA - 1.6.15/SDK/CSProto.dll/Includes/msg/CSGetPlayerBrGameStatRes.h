#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetPlayerBrGameStatRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetPlayerBrGameStatRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _br_player_gamestat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetPlayerBrGameStatRes*))(Il2CppBase() + 0x5217784))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetPlayerBrGameStatRes*, int32_t))(Il2CppBase() + 0x521778C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_br_player_gamestat() {
		return ((T (*)(CSGetPlayerBrGameStatRes*))(Il2CppBase() + 0x5217794))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetPlayerBrGameStatRes*, bool))(Il2CppBase() + 0x521779C))(this, createIfMissing);
	}

};

}