#define COMPONENT common
#include "\z\a3am\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_COMMON
    #define DEBUG_MODE_FULL
#endif
    #ifdef DEBUG_SETTINGS_COMMON
    #define DEBUG_SETTINGS DEBUG_SETTINGS_COMMON
#endif

#define SPEED_KMH 0
#define SPEED_MPH 1
#define SPEED_KNOT 2
#define SPEED_MS 3
#define SPEED_FPS 4
#define SPEED_FFF 5

#define KMH_TO_MPH 1.609
#define KMH_TO_KNOT 1.852
#define KMH_TO_MS 3.6
#define KMH_TO_FPS 1.09728
#define KMH_TO_FFF 0.00060

#define ALT_M 0
#define ALT_F 1
#define ALT_Y 2
#define ALT_R 3
#define ALT_A 4

#define METERS_TO_FEET 3.280839895
#define METERS_TO_YARD 1.0936132983
#define METERS_TO_ROD 0.1988387815
#define METERS_TO_AU 0

#define MODE_ATL 0
#define MODE_ASL 1

#include "\z\a3am\addons\main\script_macros.hpp"
