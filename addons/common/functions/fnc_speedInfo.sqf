#include "script_component.hpp"

params ["_unit"];

if (_unit isEqualTo SPEED_MPH) exitWith {[LLSTRING(Speed_MPH), KMH_TO_MPH]};
if (_unit isEqualTo SPEED_KNOT) exitWith {[LLSTRING(Speed_KNOT), KMH_TO_KNOT]};
if (_unit isEqualTo SPEED_MS) exitWith {[LLSTRING(Speed_MS), KMH_TO_MS]};
if (_unit isEqualTo SPEED_FPS) exitWith {[LLSTRING(Speed_FPS), KMH_TO_FPS]};
if (_unit isEqualTo SPEED_FFF) exitWith {[LLSTRING(Speed_FFF), KMH_TO_FFF]};

[LLSTRING(Speed_KMH), 1]
