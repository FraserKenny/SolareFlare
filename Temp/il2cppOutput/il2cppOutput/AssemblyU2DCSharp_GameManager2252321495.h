#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameManager
struct GameManager_t2252321495;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GameState1561012519.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// GameState GameManager::<GameState>k__BackingField
	int32_t ___U3CGameStateU3Ek__BackingField_3;
	// System.Boolean GameManager::<CanSwipe>k__BackingField
	bool ___U3CCanSwipeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CGameStateU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___U3CGameStateU3Ek__BackingField_3)); }
	inline int32_t get_U3CGameStateU3Ek__BackingField_3() const { return ___U3CGameStateU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CGameStateU3Ek__BackingField_3() { return &___U3CGameStateU3Ek__BackingField_3; }
	inline void set_U3CGameStateU3Ek__BackingField_3(int32_t value)
	{
		___U3CGameStateU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CCanSwipeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___U3CCanSwipeU3Ek__BackingField_4)); }
	inline bool get_U3CCanSwipeU3Ek__BackingField_4() const { return ___U3CCanSwipeU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CCanSwipeU3Ek__BackingField_4() { return &___U3CCanSwipeU3Ek__BackingField_4; }
	inline void set_U3CCanSwipeU3Ek__BackingField_4(bool value)
	{
		___U3CCanSwipeU3Ek__BackingField_4 = value;
	}
};

struct GameManager_t2252321495_StaticFields
{
public:
	// GameManager GameManager::instance
	GameManager_t2252321495 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___instance_2)); }
	inline GameManager_t2252321495 * get_instance_2() const { return ___instance_2; }
	inline GameManager_t2252321495 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GameManager_t2252321495 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
