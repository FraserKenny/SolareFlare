#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIManager
struct UIManager_t2519183485;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIManager
struct  UIManager_t2519183485  : public MonoBehaviour_t1158329972
{
public:
	// System.Single UIManager::score
	float ___score_3;
	// UnityEngine.UI.Text UIManager::ScoreText
	Text_t356221433 * ___ScoreText_4;
	// UnityEngine.UI.Text UIManager::StatusText
	Text_t356221433 * ___StatusText_5;

public:
	inline static int32_t get_offset_of_score_3() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___score_3)); }
	inline float get_score_3() const { return ___score_3; }
	inline float* get_address_of_score_3() { return &___score_3; }
	inline void set_score_3(float value)
	{
		___score_3 = value;
	}

	inline static int32_t get_offset_of_ScoreText_4() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___ScoreText_4)); }
	inline Text_t356221433 * get_ScoreText_4() const { return ___ScoreText_4; }
	inline Text_t356221433 ** get_address_of_ScoreText_4() { return &___ScoreText_4; }
	inline void set_ScoreText_4(Text_t356221433 * value)
	{
		___ScoreText_4 = value;
		Il2CppCodeGenWriteBarrier(&___ScoreText_4, value);
	}

	inline static int32_t get_offset_of_StatusText_5() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___StatusText_5)); }
	inline Text_t356221433 * get_StatusText_5() const { return ___StatusText_5; }
	inline Text_t356221433 ** get_address_of_StatusText_5() { return &___StatusText_5; }
	inline void set_StatusText_5(Text_t356221433 * value)
	{
		___StatusText_5 = value;
		Il2CppCodeGenWriteBarrier(&___StatusText_5, value);
	}
};

struct UIManager_t2519183485_StaticFields
{
public:
	// UIManager UIManager::instance
	UIManager_t2519183485 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(UIManager_t2519183485_StaticFields, ___instance_2)); }
	inline UIManager_t2519183485 * get_instance_2() const { return ___instance_2; }
	inline UIManager_t2519183485 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(UIManager_t2519183485 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
