#include "script_component.hpp"

params ["_unit"];

if (_unit isEqualTo ALT_F) exitWith {["ft", METERS_TO_FEET]};
if (_unit isEqualTo ALT_L) exitWith {["l", METERS_TO_LEAGUE]};
if (_unit isEqualTo ALT_R) exitWith {["r", METERS_TO_ROD]};
if (_unit isEqualTo ALT_R) exitWith {["au", METERS_TO_AU]};

["m", 1]
