#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_State967880085.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_TimeSpan3430258949.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SwipeDetector
struct  SwipeDetector_t954696764  : public MonoBehaviour_t1158329972
{
public:
	// State SwipeDetector::state
	int32_t ___state_2;
	// UnityEngine.Vector2 SwipeDetector::startPoint
	Vector2_t2243707579  ___startPoint_3;
	// System.DateTime SwipeDetector::timeSwipeStarted
	DateTime_t693205669  ___timeSwipeStarted_4;
	// System.TimeSpan SwipeDetector::maxSwipeDuration
	TimeSpan_t3430258949  ___maxSwipeDuration_5;
	// System.TimeSpan SwipeDetector::minSwipeDuration
	TimeSpan_t3430258949  ___minSwipeDuration_6;

public:
	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(SwipeDetector_t954696764, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}

	inline static int32_t get_offset_of_startPoint_3() { return static_cast<int32_t>(offsetof(SwipeDetector_t954696764, ___startPoint_3)); }
	inline Vector2_t2243707579  get_startPoint_3() const { return ___startPoint_3; }
	inline Vector2_t2243707579 * get_address_of_startPoint_3() { return &___startPoint_3; }
	inline void set_startPoint_3(Vector2_t2243707579  value)
	{
		___startPoint_3 = value;
	}

	inline static int32_t get_offset_of_timeSwipeStarted_4() { return static_cast<int32_t>(offsetof(SwipeDetector_t954696764, ___timeSwipeStarted_4)); }
	inline DateTime_t693205669  get_timeSwipeStarted_4() const { return ___timeSwipeStarted_4; }
	inline DateTime_t693205669 * get_address_of_timeSwipeStarted_4() { return &___timeSwipeStarted_4; }
	inline void set_timeSwipeStarted_4(DateTime_t693205669  value)
	{
		___timeSwipeStarted_4 = value;
	}

	inline static int32_t get_offset_of_maxSwipeDuration_5() { return static_cast<int32_t>(offsetof(SwipeDetector_t954696764, ___maxSwipeDuration_5)); }
	inline TimeSpan_t3430258949  get_maxSwipeDuration_5() const { return ___maxSwipeDuration_5; }
	inline TimeSpan_t3430258949 * get_address_of_maxSwipeDuration_5() { return &___maxSwipeDuration_5; }
	inline void set_maxSwipeDuration_5(TimeSpan_t3430258949  value)
	{
		___maxSwipeDuration_5 = value;
	}

	inline static int32_t get_offset_of_minSwipeDuration_6() { return static_cast<int32_t>(offsetof(SwipeDetector_t954696764, ___minSwipeDuration_6)); }
	inline TimeSpan_t3430258949  get_minSwipeDuration_6() const { return ___minSwipeDuration_6; }
	inline TimeSpan_t3430258949 * get_address_of_minSwipeDuration_6() { return &___minSwipeDuration_6; }
	inline void set_minSwipeDuration_6(TimeSpan_t3430258949  value)
	{
		___minSwipeDuration_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
