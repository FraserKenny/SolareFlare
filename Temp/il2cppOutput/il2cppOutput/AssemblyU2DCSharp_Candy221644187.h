#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Candy
struct  Candy_t221644187  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Candy::ScorePoints
	int32_t ___ScorePoints_2;
	// System.Single Candy::rotateSpeed
	float ___rotateSpeed_3;

public:
	inline static int32_t get_offset_of_ScorePoints_2() { return static_cast<int32_t>(offsetof(Candy_t221644187, ___ScorePoints_2)); }
	inline int32_t get_ScorePoints_2() const { return ___ScorePoints_2; }
	inline int32_t* get_address_of_ScorePoints_2() { return &___ScorePoints_2; }
	inline void set_ScorePoints_2(int32_t value)
	{
		___ScorePoints_2 = value;
	}

	inline static int32_t get_offset_of_rotateSpeed_3() { return static_cast<int32_t>(offsetof(Candy_t221644187, ___rotateSpeed_3)); }
	inline float get_rotateSpeed_3() const { return ___rotateSpeed_3; }
	inline float* get_address_of_rotateSpeed_3() { return &___rotateSpeed_3; }
	inline void set_rotateSpeed_3(float value)
	{
		___rotateSpeed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
