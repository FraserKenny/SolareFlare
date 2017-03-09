#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CharacterController
struct CharacterController_t4094781467;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Transform
struct Transform_t3275118058;
// Assets.Scripts.IInputDetector
struct IInputDetector_t2299097313;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterRotateMovement
struct  CharacterRotateMovement_t760223033  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 CharacterRotateMovement::moveDirection
	Vector3_t2243707580  ___moveDirection_2;
	// System.Single CharacterRotateMovement::gravity
	float ___gravity_3;
	// UnityEngine.CharacterController CharacterRotateMovement::controller
	CharacterController_t4094781467 * ___controller_4;
	// UnityEngine.Animator CharacterRotateMovement::anim
	Animator_t69676727 * ___anim_5;
	// System.Single CharacterRotateMovement::JumpSpeed
	float ___JumpSpeed_6;
	// System.Single CharacterRotateMovement::Speed
	float ___Speed_7;
	// UnityEngine.Transform CharacterRotateMovement::CharacterGO
	Transform_t3275118058 * ___CharacterGO_8;
	// System.Boolean CharacterRotateMovement::isInSwipeArea
	bool ___isInSwipeArea_9;
	// Assets.Scripts.IInputDetector CharacterRotateMovement::inputDetector
	Il2CppObject * ___inputDetector_10;

public:
	inline static int32_t get_offset_of_moveDirection_2() { return static_cast<int32_t>(offsetof(CharacterRotateMovement_t760223033, ___moveDirection_2)); }
	inline Vector3_t2243707580  get_moveDirection_2() const { return ___moveDirection_2; }
	inline Vector3_t2243707580 * get_address_of_moveDirection_2() { return &___moveDirection_2; }
	inline void set_moveDirection_2(Vector3_t2243707580  value)
	{
		___moveDirection_2 = value;
	}

	inline static int32_t get_offset_of_gravity_3() { return static_cast<int32_t>(offsetof(CharacterRotateMovement_t760223033, ___gravity_3)); }
	inline float get_gravity_3() const { return ___gravity_3; }
	inline float* get_address_of_gravity_3() { return &___gravity_3; }
	inline void set_gravity_3(float value)
	{
		___gravity_3 = value;
	}

	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(CharacterRotateMovement_t760223033, ___controller_4)); }
	inline CharacterController_t4094781467 * get_controller_4() const { return ___controller_4; }
	inline CharacterController_t4094781467 ** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(CharacterController_t4094781467 * value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier(&___controller_4, value);
	}

	inline static int32_t get_offset_of_anim_5() { return static_cast<int32_t>(offsetof(CharacterRotateMovement_t760223033, ___anim_5)); }
	inline Animator_t69676727 * get_anim_5() const { return ___anim_5; }
	inline Animator_t69676727 ** get_address_of_anim_5() { return &___anim_5; }
	inline void set_anim_5(Animator_t69676727 * value)
	{
		___anim_5 = value;
		Il2CppCodeGenWriteBarrier(&___anim_5, value);
	}

	inline static int32_t get_offset_of_JumpSpeed_6() { return static_cast<int32_t>(offsetof(CharacterRotateMovement_t760223033, ___JumpSpeed_6)); }
	inline float get_JumpSpeed_6() const { return ___JumpSpeed_6; }
	inline float* get_address_of_JumpSpeed_6() { return &___JumpSpeed_6; }
	inline void set_JumpSpeed_6(float value)
	{
		___JumpSpeed_6 = value;
	}

	inline static int32_t get_offset_of_Speed_7() { return static_cast<int32_t>(offsetof(CharacterRotateMovement_t760223033, ___Speed_7)); }
	inline float get_Speed_7() const { return ___Speed_7; }
	inline float* get_address_of_Speed_7() { return &___Speed_7; }
	inline void set_Speed_7(float value)
	{
		___Speed_7 = value;
	}

	inline static int32_t get_offset_of_CharacterGO_8() { return static_cast<int32_t>(offsetof(CharacterRotateMovement_t760223033, ___CharacterGO_8)); }
	inline Transform_t3275118058 * get_CharacterGO_8() const { return ___CharacterGO_8; }
	inline Transform_t3275118058 ** get_address_of_CharacterGO_8() { return &___CharacterGO_8; }
	inline void set_CharacterGO_8(Transform_t3275118058 * value)
	{
		___CharacterGO_8 = value;
		Il2CppCodeGenWriteBarrier(&___CharacterGO_8, value);
	}

	inline static int32_t get_offset_of_isInSwipeArea_9() { return static_cast<int32_t>(offsetof(CharacterRotateMovement_t760223033, ___isInSwipeArea_9)); }
	inline bool get_isInSwipeArea_9() const { return ___isInSwipeArea_9; }
	inline bool* get_address_of_isInSwipeArea_9() { return &___isInSwipeArea_9; }
	inline void set_isInSwipeArea_9(bool value)
	{
		___isInSwipeArea_9 = value;
	}

	inline static int32_t get_offset_of_inputDetector_10() { return static_cast<int32_t>(offsetof(CharacterRotateMovement_t760223033, ___inputDetector_10)); }
	inline Il2CppObject * get_inputDetector_10() const { return ___inputDetector_10; }
	inline Il2CppObject ** get_address_of_inputDetector_10() { return &___inputDetector_10; }
	inline void set_inputDetector_10(Il2CppObject * value)
	{
		___inputDetector_10 = value;
		Il2CppCodeGenWriteBarrier(&___inputDetector_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
