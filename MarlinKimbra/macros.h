#ifndef MACROS_H
#define MACROS_H

// Macros for bit masks
#define BIT(b) (1<<(b))
#define TEST(n,b) (((n)&BIT(b))!=0)
#define SET_BIT(n,b,value) (n) ^= ((-value)^(n)) & (BIT(b))

// Macros for maths shortcuts
#define M_PI 3.1415926536
#define RADIANS(d) ((d)*M_PI/180.0)
#define DEGREES(r) ((r)*180.0/M_PI)
#define SIN_60 0.8660254037844386
#define COS_60 0.5

// Macros to contrain values
#define NOLESS(v,n) do{ if (v < n) v = n; }while(0)
#define NOMORE(v,n) do{ if (v > n) v = n; }while(0)

// Macros to support option testing
#define _CAT(a, ...) a ## __VA_ARGS__
#define SWITCH_ENABLED_0 0
#define SWITCH_ENABLED_1 1
#define SWITCH_ENABLED_  1
#define ENABLED(b) _CAT(SWITCH_ENABLED_, b)
#define DISABLED(b) (!_CAT(SWITCH_ENABLED_, b))

#define COUNT(a) (sizeof(a)/sizeof(*a))


#define PIN_EXISTS(PN) (defined(PN##_PIN) && PN##_PIN >= 0)
#define HAS(FE) (HAS_##FE)
#define HASNT(FE) (!(HAS_##FE))

// Macros for board type
#define BOARD_UNKNOWN -1

#define BOARD_GEN7_CUSTOM       10   // Gen7 custom (Alfons3 Version) "https://github.com/Alfons3/Generation_7_Electronics"
#define BOARD_GEN7_12           11   // Gen7 v1.1, v1.2
#define BOARD_GEN7_13           12   // Gen7 v1.3
#define BOARD_GEN7_14           13   // Gen7 v1.4

#define BOARD_CHEAPTRONIC       2    // Cheaptronic v1.0
#define BOARD_SETHI             20   // Sethi 3D_1
#define BOARD_ELEFU_3           21   // Elefu Ra Board (v3)
#define BOARD_GEN3_MONOLITHIC   22   // Gen3 Monolithic Electronics

#define BOARD_RAMPS_OLD         3    // MEGA/RAMPS up to 1.2
#define BOARD_RAMPS_13_EFB      33   // RAMPS 1.3 / 1.4 (Power outputs: Hotend, Fan, Bed)
#define BOARD_RAMPS_13_EEB      34   // RAMPS 1.3 / 1.4 (Power outputs: Hotend0, Hotend1, Bed)
#define BOARD_RAMPS_13_EFF      35   // RAMPS 1.3 / 1.4 (Power outputs: Hotend, Fan, Fan)
#define BOARD_RAMPS_13_EEF      36   // RAMPS 1.3 / 1.4 (Power outputs: Hotend0, Hotend1, Fan)
#define BOARD_RAMPS_13_EEE      37   // RAMPS 1.3 / 1.4 (Power outputs: Hotend0, Hotend1, Hotend2)
#define BOARD_RAMBO             301  // Rambo
#define BOARD_MINIRAMBO         302  // Mini-Rambo

#define BOARD_DUEMILANOVE_328P  4    // Duemilanove w/ ATMega328P pin assignments
#define BOARD_RADDS             402  // RADDS
#define BOARD_RAMPS_FDV1        403  // RAMPS-FD V1
#define BOARD_RAMPS_FDV2        404  // RAMPS-FD V2
#define BOARD_RAMPS4DUE         433  // RAMPS4DUE with AndrewBCN's RAMPS mods (http://forums.reprap.org/read.php?219,479626,page=1)

#define BOARD_GEN6              5    // Gen6
#define BOARD_GEN6_DELUXE       51   // Gen6 deluxe
#define BOARD_ALLIGATOR         502  // ALLIGATOR R2 ARM 32

#define BOARD_SANGUINOLOLU_11   6    // Sanguinololu < 1.2
#define BOARD_SANGUINOLOLU_12   62   // Sanguinololu 1.2 and above
#define BOARD_MELZI             63   // Melzi
#define BOARD_STB_11            64   // STB V1.1
#define BOARD_AZTEEG_X1         65   // Azteeg X1
#define BOARD_MELZI_MAKR3D      66   // Melzi with ATmega1284 (MaKr3d version)
#define BOARD_AZTEEG_X3         67   // Azteeg X3
#define BOARD_AZTEEG_X3_PRO     68   // Azteeg X3 Pro

#define BOARD_ULTIMAKER         7    // Ultimaker
#define BOARD_MEGATRONICS       70   // Megatronics
#define BOARD_MEGATRONICS_2     701  // Megatronics v2.0
#define BOARD_MINITRONICS       702  // Minitronics v1.0
#define BOARD_MEGATRONICS_3     703  // Megatronics v3.0
#define BOARD_ULTIMAKER_OLD     71   // Ultimaker (Older electronics. Pre 1.5.4. This is rare)
#define BOARD_ULTIMAIN_2        72   // Ultimainboard 2.x (Uses TEMP_SENSOR 20)
#define BOARD_3DRAG             77   // 3Drag Controller
#define BOARD_K8200             78   // Vellemann K8200 Controller (derived from 3Drag Controller)

#define BOARD_TEENSYLU          8    // Teensylu
#define BOARD_RUMBA             80   // Rumba
#define BOARD_PRINTRBOARD       81   // Printrboard (AT90USB1286)
#define BOARD_BRAINWAVE         82   // Brainwave (AT90USB646)
#define BOARD_SAV_MKI           83   // SAV Mk-I (AT90USB1286)
#define BOARD_TEENSY2           84   // Teensy++2.0 (AT90USB1286)
#define BOARD_5DPRINT           88   // 5DPrint D8 Driver Board

#define BOARD_GEN3_PLUS         9    // Gen3+
#define BOARD_OMCA_A            90   // Alpha OMCA board
#define BOARD_OMCA              91   // Final OMCA board
#define BOARD_LEAPFROG          999  // Leapfrog

#define BOARD_99                99   // This is in pins.h but...?

#define MB(board) (MOTHERBOARD==BOARD_##board)

//Macros for mechanics
#define MECH_UNKNOWN    -1
#define MECH_CARTESIAN   0
#define MECH_COREXY      1
#define MECH_COREXZ      2
#define MECH_DELTA       3
#define MECH_SCARA       4

#define MECH(mechanism)  (MEACHANISM == BOARD_##mechanism)

#endif //__MACROS_H
