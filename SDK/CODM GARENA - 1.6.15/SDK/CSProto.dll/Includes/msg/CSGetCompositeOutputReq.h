#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetCompositeOutputReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetCompositeOutputReq"));
	}

	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_id() {
		return ((T (*)(CSGetCompositeOutputReq*))(Il2CppBase() + 0x5215E50))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(CSGetCompositeOutputReq*, uint32_t))(Il2CppBase() + 0x5215E58))(this, value);
	}
	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSGetCompositeOutputReq*))(Il2CppBase() + 0x5215E60))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSGetCompositeOutputReq*, int32_t))(Il2CppBase() + 0x5215E68))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetCompositeOutputReq*, bool))(Il2CppBase() + 0x5215E70))(this, createIfMissing);
	}

};

}