#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StuffSpawner
struct  StuffSpawner_t2569753870  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform[] StuffSpawner::StuffSpawnPoints
	TransformU5BU5D_t3764228911* ___StuffSpawnPoints_2;
	// UnityEngine.GameObject[] StuffSpawner::Bonus
	GameObjectU5BU5D_t3057952154* ___Bonus_3;
	// UnityEngine.GameObject[] StuffSpawner::Obstacles
	GameObjectU5BU5D_t3057952154* ___Obstacles_4;
	// System.Boolean StuffSpawner::RandomX
	bool ___RandomX_5;
	// System.Single StuffSpawner::minX
	float ___minX_6;
	// System.Single StuffSpawner::maxX
	float ___maxX_7;

public:
	inline static int32_t get_offset_of_StuffSpawnPoints_2() { return static_cast<int32_t>(offsetof(StuffSpawner_t2569753870, ___StuffSpawnPoints_2)); }
	inline TransformU5BU5D_t3764228911* get_StuffSpawnPoints_2() const { return ___StuffSpawnPoints_2; }
	inline TransformU5BU5D_t3764228911** get_address_of_StuffSpawnPoints_2() { return &___StuffSpawnPoints_2; }
	inline void set_StuffSpawnPoints_2(TransformU5BU5D_t3764228911* value)
	{
		___StuffSpawnPoints_2 = value;
		Il2CppCodeGenWriteBarrier(&___StuffSpawnPoints_2, value);
	}

	inline static int32_t get_offset_of_Bonus_3() { return static_cast<int32_t>(offsetof(StuffSpawner_t2569753870, ___Bonus_3)); }
	inline GameObjectU5BU5D_t3057952154* get_Bonus_3() const { return ___Bonus_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_Bonus_3() { return &___Bonus_3; }
	inline void set_Bonus_3(GameObjectU5BU5D_t3057952154* value)
	{
		___Bonus_3 = value;
		Il2CppCodeGenWriteBarrier(&___Bonus_3, value);
	}

	inline static int32_t get_offset_of_Obstacles_4() { return static_cast<int32_t>(offsetof(StuffSpawner_t2569753870, ___Obstacles_4)); }
	inline GameObjectU5BU5D_t3057952154* get_Obstacles_4() const { return ___Obstacles_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_Obstacles_4() { return &___Obstacles_4; }
	inline void set_Obstacles_4(GameObjectU5BU5D_t3057952154* value)
	{
		___Obstacles_4 = value;
		Il2CppCodeGenWriteBarrier(&___Obstacles_4, value);
	}

	inline static int32_t get_offset_of_RandomX_5() { return static_cast<int32_t>(offsetof(StuffSpawner_t2569753870, ___RandomX_5)); }
	inline bool get_RandomX_5() const { return ___RandomX_5; }
	inline bool* get_address_of_RandomX_5() { return &___RandomX_5; }
	inline void set_RandomX_5(bool value)
	{
		___RandomX_5 = value;
	}

	inline static int32_t get_offset_of_minX_6() { return static_cast<int32_t>(offsetof(StuffSpawner_t2569753870, ___minX_6)); }
	inline float get_minX_6() const { return ___minX_6; }
	inline float* get_address_of_minX_6() { return &___minX_6; }
	inline void set_minX_6(float value)
	{
		___minX_6 = value;
	}

	inline static int32_t get_offset_of_maxX_7() { return static_cast<int32_t>(offsetof(StuffSpawner_t2569753870, ___maxX_7)); }
	inline float get_maxX_7() const { return ___maxX_7; }
	inline float* get_address_of_maxX_7() { return &___maxX_7; }
	inline void set_maxX_7(float value)
	{
		___maxX_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
