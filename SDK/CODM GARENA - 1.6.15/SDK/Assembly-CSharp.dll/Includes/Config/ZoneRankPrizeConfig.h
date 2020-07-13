#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ZoneRankPrizeConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ZoneRankPrizeConfig"));
	}

	template <typename T = Il2CppList<int32_t>*> static T& RankList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> static T& ZoneAwardDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppList<int32_t>*> static T& rankidList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> T& Rank_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Rank() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Prize_info_1_item_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Prize_info_1_item_num() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Prize_info_1_duration() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Prize_info_2_item_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Prize_info_2_item_num() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Prize_info_2_duration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAwardList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRankidList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> static T GetAwardList(int32_t Rank_Id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4152524))(0, Rank_Id);
	}
	template <typename T = void> static T GetRankidList(uintptr_t rankid) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41529DC))(0, rankid);
	}
	template <typename T = int32_t> T get_Rank_id() {
		return ((T (*)(ZoneRankPrizeConfig*))(Il2CppBase() + 0x415299C))(this);
	}
	template <typename T = void> T set_Rank_id(int32_t value) {
		return ((T (*)(ZoneRankPrizeConfig*, int32_t))(Il2CppBase() + 0x4152BF0))(this, value);
	}
	template <typename T = int32_t> T get_Rank() {
		return ((T (*)(ZoneRankPrizeConfig*))(Il2CppBase() + 0x41529D4))(this);
	}
	template <typename T = void> T set_Rank(int32_t value) {
		return ((T (*)(ZoneRankPrizeConfig*, int32_t))(Il2CppBase() + 0x4152BF8))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_1_item_id() {
		return ((T (*)(ZoneRankPrizeConfig*))(Il2CppBase() + 0x41529A4))(this);
	}
	template <typename T = void> T set_Prize_info_1_item_id(int32_t value) {
		return ((T (*)(ZoneRankPrizeConfig*, int32_t))(Il2CppBase() + 0x4152C00))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_1_item_num() {
		return ((T (*)(ZoneRankPrizeConfig*))(Il2CppBase() + 0x41529AC))(this);
	}
	template <typename T = void> T set_Prize_info_1_item_num(int32_t value) {
		return ((T (*)(ZoneRankPrizeConfig*, int32_t))(Il2CppBase() + 0x4152C08))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_1_duration() {
		return ((T (*)(ZoneRankPrizeConfig*))(Il2CppBase() + 0x41529B4))(this);
	}
	template <typename T = void> T set_Prize_info_1_duration(int32_t value) {
		return ((T (*)(ZoneRankPrizeConfig*, int32_t))(Il2CppBase() + 0x4152C10))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_2_item_id() {
		return ((T (*)(ZoneRankPrizeConfig*))(Il2CppBase() + 0x41529BC))(this);
	}
	template <typename T = void> T set_Prize_info_2_item_id(int32_t value) {
		return ((T (*)(ZoneRankPrizeConfig*, int32_t))(Il2CppBase() + 0x4152C18))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_2_item_num() {
		return ((T (*)(ZoneRankPrizeConfig*))(Il2CppBase() + 0x41529C4))(this);
	}
	template <typename T = void> T set_Prize_info_2_item_num(int32_t value) {
		return ((T (*)(ZoneRankPrizeConfig*, int32_t))(Il2CppBase() + 0x4152C20))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_2_duration() {
		return ((T (*)(ZoneRankPrizeConfig*))(Il2CppBase() + 0x41529CC))(this);
	}
	template <typename T = void> T set_Prize_info_2_duration(int32_t value) {
		return ((T (*)(ZoneRankPrizeConfig*, int32_t))(Il2CppBase() + 0x4152C28))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ZoneRankPrizeConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4152C30))(this, bytes, position);
	}

};

}