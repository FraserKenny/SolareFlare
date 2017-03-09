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
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PathSpawnCollider
struct  PathSpawnCollider_t2627468794  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PathSpawnCollider::positionY
	float ___positionY_2;
	// UnityEngine.Transform[] PathSpawnCollider::PathSpawnPoints
	TransformU5BU5D_t3764228911* ___PathSpawnPoints_3;
	// UnityEngine.GameObject PathSpawnCollider::Path
	GameObject_t1756533147 * ___Path_4;
	// UnityEngine.GameObject PathSpawnCollider::DangerousBorder
	GameObject_t1756533147 * ___DangerousBorder_5;

public:
	inline static int32_t get_offset_of_positionY_2() { return static_cast<int32_t>(offsetof(PathSpawnCollider_t2627468794, ___positionY_2)); }
	inline float get_positionY_2() const { return ___positionY_2; }
	inline float* get_address_of_positionY_2() { return &___positionY_2; }
	inline void set_positionY_2(float value)
	{
		___positionY_2 = value;
	}

	inline static int32_t get_offset_of_PathSpawnPoints_3() { return static_cast<int32_t>(offsetof(PathSpawnCollider_t2627468794, ___PathSpawnPoints_3)); }
	inline TransformU5BU5D_t3764228911* get_PathSpawnPoints_3() const { return ___PathSpawnPoints_3; }
	inline TransformU5BU5D_t3764228911** get_address_of_PathSpawnPoints_3() { return &___PathSpawnPoints_3; }
	inline void set_PathSpawnPoints_3(TransformU5BU5D_t3764228911* value)
	{
		___PathSpawnPoints_3 = value;
		Il2CppCodeGenWriteBarrier(&___PathSpawnPoints_3, value);
	}

	inline static int32_t get_offset_of_Path_4() { return static_cast<int32_t>(offsetof(PathSpawnCollider_t2627468794, ___Path_4)); }
	inline GameObject_t1756533147 * get_Path_4() const { return ___Path_4; }
	inline GameObject_t1756533147 ** get_address_of_Path_4() { return &___Path_4; }
	inline void set_Path_4(GameObject_t1756533147 * value)
	{
		___Path_4 = value;
		Il2CppCodeGenWriteBarrier(&___Path_4, value);
	}

	inline static int32_t get_offset_of_DangerousBorder_5() { return static_cast<int32_t>(offsetof(PathSpawnCollider_t2627468794, ___DangerousBorder_5)); }
	inline GameObject_t1756533147 * get_DangerousBorder_5() const { return ___DangerousBorder_5; }
	inline GameObject_t1756533147 ** get_address_of_DangerousBorder_5() { return &___DangerousBorder_5; }
	inline void set_DangerousBorder_5(GameObject_t1756533147 * value)
	{
		___DangerousBorder_5 = value;
		Il2CppCodeGenWriteBarrier(&___DangerousBorder_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
