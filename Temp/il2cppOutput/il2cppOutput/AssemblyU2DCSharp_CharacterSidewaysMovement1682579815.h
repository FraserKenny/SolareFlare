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

// CharacterSidewaysMovement
struct  CharacterSidewaysMovement_t1682579815  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 CharacterSidewaysMovement::moveDirection
	Vector3_t2243707580  ___moveDirection_2;
	// System.Single CharacterSidewaysMovement::gravity
	float ___gravity_3;
	// UnityEngine.CharacterController CharacterSidewaysMovement::controller
	CharacterController_t4094781467 * ___controller_4;
	// UnityEngine.Animator CharacterSidewaysMovement::anim
	Animator_t69676727 * ___anim_5;
	// System.Boolean CharacterSidewaysMovement::isChangingLane
	bool ___isChangingLane_6;
	// UnityEngine.Vector3 CharacterSidewaysMovement::locationAfterChangingLane
	Vector3_t2243707580  ___locationAfterChangingLane_7;
	// UnityEngine.Vector3 CharacterSidewaysMovement::sidewaysMovementDistance
	Vector3_t2243707580  ___sidewaysMovementDistance_8;
	// System.Single CharacterSidewaysMovement::SideWaysSpeed
	float ___SideWaysSpeed_9;
	// System.Single CharacterSidewaysMovement::JumpSpeed
	float ___JumpSpeed_10;
	// System.Single CharacterSidewaysMovement::Speed
	float ___Speed_11;
	// UnityEngine.Transform CharacterSidewaysMovement::CharacterGO
	Transform_t3275118058 * ___CharacterGO_12;
	// Assets.Scripts.IInputDetector CharacterSidewaysMovement::inputDetector
	Il2CppObject * ___inputDetector_13;

public:
	inline static int32_t get_offset_of_moveDirection_2() { return static_cast<int32_t>(offsetof(CharacterSidewaysMovement_t1682579815, ___moveDirection_2)); }
	inline Vector3_t2243707580  get_moveDirection_2() const { return ___moveDirection_2; }
	inline Vector3_t2243707580 * get_address_of_moveDirection_2() { return &___moveDirection_2; }
	inline void set_moveDirection_2(Vector3_t2243707580  value)
	{
		___moveDirection_2 = value;
	}

	inline static int32_t get_offset_of_gravity_3() { return static_cast<int32_t>(offsetof(CharacterSidewaysMovement_t1682579815, ___gravity_3)); }
	inline float get_gravity_3() const { return ___gravity_3; }
	inline float* get_address_of_gravity_3() { return &___gravity_3; }
	inline void set_gravity_3(float value)
	{
		___gravity_3 = value;
	}

	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(CharacterSidewaysMovement_t1682579815, ___controller_4)); }
	inline CharacterController_t4094781467 * get_controller_4() const { return ___controller_4; }
	inline CharacterController_t4094781467 ** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(CharacterController_t4094781467 * value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier(&___controller_4, value);
	}

	inline static int32_t get_offset_of_anim_5() { return static_cast<int32_t>(offsetof(CharacterSidewaysMovement_t1682579815, ___anim_5)); }
	inline Animator_t69676727 * get_anim_5() const { return ___anim_5; }
	inline Animator_t69676727 ** get_address_of_anim_5() { return &___anim_5; }
	inline void set_anim_5(Animator_t69676727 * value)
	{
		___anim_5 = value;
		Il2CppCodeGenWriteBarrier(&___anim_5, value);
	}

	inline static int32_t get_offset_of_isChangingLane_6() { return static_cast<int32_t>(offsetof(CharacterSidewaysMovement_t1682579815, ___isChangingLane_6)); }
	inline bool get_isChangingLane_6() const { return ___isChangingLane_6; }
	inline bool* get_address_of_isChangingLane_6() { return &___isChangingLane_6; }
	inline void set_isChangingLane_6(bool value)
	{
		___isChangingLane_6 = value;
	}

	inline static int32_t get_offset_of_locationAfterChangingLane_7() { return static_cast<int32_t>(offsetof(CharacterSidewaysMovement_t1682579815, ___locationAfterChangingLane_7)); }
	inline Vector3_t2243707580  get_locationAfterChangingLane_7() const { return ___locationAfterChangingLane_7; }
	inline Vector3_t2243707580 * get_address_of_locationAfterChangingLane_7() { return &___locationAfterChangingLane_7; }
	inline void set_locationAfterChangingLane_7(Vector3_t2243707580  value)
	{
		___locationAfterChangingLane_7 = value;
	}

	inline static int32_t get_offset_of_sidewaysMovementDistance_8() { return static_cast<int32_t>(offsetof(CharacterSidewaysMovement_t1682579815, ___sidewaysMovementDistance_8)); }
	inline Vector3_t2243707580  get_sidewaysMovementDistance_8() const { return ___sidewaysMovementDistance_8; }
	inline Vector3_t2243707580 * get_address_of_sidewaysMovementDistance_8() { return &___sidewaysMovementDistance_8; }
	inline void set_sidewaysMovementDistance_8(Vector3_t2243707580  value)
	{
		___sidewaysMovementDistance_8 = value;
	}

	inline static int32_t get_offset_of_SideWaysSpeed_9() { return static_cast<int32_t>(offsetof(CharacterSidewaysMovement_t1682579815, ___SideWaysSpeed_9)); }
	inline float get_SideWaysSpeed_9() const { return ___SideWaysSpeed_9; }
	inline float* get_address_of_SideWaysSpeed_9() { return &___SideWaysSpeed_9; }
	inline void set_SideWaysSpeed_9(float value)
	{
		___SideWaysSpeed_9 = value;
	}

	inline static int32_t get_offset_of_JumpSpeed_10() { return static_cast<int32_t>(offsetof(CharacterSidewaysMovement_t1682579815, ___JumpSpeed_10)); }
	inline float get_JumpSpeed_10() const { return ___JumpSpeed_10; }
	inline float* get_address_of_JumpSpeed_10() { return &___JumpSpeed_10; }
	inline void set_JumpSpeed_10(float value)
	{
		___JumpSpeed_10 = value;
	}

	inline static int32_t get_offset_of_Speed_11() { return static_cast<int32_t>(offsetof(CharacterSidewaysMovement_t1682579815, ___Speed_11)); }
	inline float get_Speed_11() const { return ___Speed_11; }
	inline float* get_address_of_Speed_11() { return &___Speed_11; }
	inline void set_Speed_11(float value)
	{
		___Speed_11 = value;
	}

	inline static int32_t get_offset_of_CharacterGO_12() { return static_cast<int32_t>(offsetof(CharacterSidewaysMovement_t1682579815, ___CharacterGO_12)); }
	inline Transform_t3275118058 * get_CharacterGO_12() const { return ___CharacterGO_12; }
	inline Transform_t3275118058 ** get_address_of_CharacterGO_12() { return &___CharacterGO_12; }
	inline void set_CharacterGO_12(Transform_t3275118058 * value)
	{
		___CharacterGO_12 = value;
		Il2CppCodeGenWriteBarrier(&___CharacterGO_12, value);
	}

	inline static int32_t get_offset_of_inputDetector_13() { return static_cast<int32_t>(offsetof(CharacterSidewaysMovement_t1682579815, ___inputDetector_13)); }
	inline Il2CppObject * get_inputDetector_13() const { return ___inputDetector_13; }
	inline Il2CppObject ** get_address_of_inputDetector_13() { return &___inputDetector_13; }
	inline void set_inputDetector_13(Il2CppObject * value)
	{
		___inputDetector_13 = value;
		Il2CppCodeGenWriteBarrier(&___inputDetector_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
