#include "actionmap.h"
#include "action_code.h"
#include "actionmap_common.h"

//ACTION_DEFAULT_LAYER_SET(0),
/*
 * Actions
 */
#define AC_BLD    ACTION_BACKLIGHT_DECREASE()
#define AC_BLI    ACTION_BACKLIGHT_INCREASE()

#define AC_LS0    ACTION_DEFAULT_LAYER_SET(0)
#define AC_LS1    ACTION_DEFAULT_LAYER_SET(1)
#define AC_LS2    ACTION_DEFAULT_LAYER_SET(2)

#define AC_TL3    ACTION_LAYER_TAP_KEY(3, KC_N)
#define AC_TL3a   ACTION_LAYER_TAP_KEY(3, KC_K)
#define AC_TL5    ACTION_LAYER_TAP_KEY(5, KC_B)
#define AC_TL4    ACTION_LAYER_TAP_KEY(4, KC_M)
#define AC_TL6    ACTION_LAYER_TAP_KEY(6, KC_V)
#define AC_TL9    ACTION_LAYER_TAP_KEY(9, KC_ESC)

// Alt cm
#define AC_TL5a    ACTION_LAYER_TAP_KEY(7, KC_B)
#define AC_TL6a    ACTION_LAYER_TAP_KEY(8, KC_V)

#define AC_TM1    ACTION_MODS_TAP_KEY(MOD_LSFT, KC_SPACE)
#define AC_TM2    ACTION_MODS_TAP_KEY(MOD_LCTL, KC_Z)
#define AC_TM3    ACTION_MODS_TAP_KEY(MOD_LGUI, KC_X)
#define AC_TM4    ACTION_MODS_TAP_KEY(MOD_LALT, KC_C)
#define AC_TM5    ACTION_MODS_TAP_KEY(MOD_RCTL, KC_M)

#define AC_S01    ACTION_MODS_KEY(MOD_LSFT, KC_1)
#define AC_S02    ACTION_MODS_KEY(MOD_LSFT, KC_2)
#define AC_S03    ACTION_MODS_KEY(MOD_LSFT, KC_3)
#define AC_S04    ACTION_MODS_KEY(MOD_LSFT, KC_4)
#define AC_S05    ACTION_MODS_KEY(MOD_LSFT, KC_5)
#define AC_S06    ACTION_MODS_KEY(MOD_LSFT, KC_6)
#define AC_S07    ACTION_MODS_KEY(MOD_LSFT, KC_7)
#define AC_S08    ACTION_MODS_KEY(MOD_LSFT, KC_8)
#define AC_S09    ACTION_MODS_KEY(MOD_LSFT, KC_9)
#define AC_S10    ACTION_MODS_KEY(MOD_LSFT, KC_0)

#define AC_S11    ACTION_MODS_KEY(MOD_LSFT, KC_MINS)
#define AC_S12    ACTION_MODS_KEY(MOD_LSFT, KC_EQL)
#define AC_S13    ACTION_MODS_KEY(MOD_LSFT, KC_LBRC)
#define AC_S14    ACTION_MODS_KEY(MOD_LSFT, KC_RBRC)
#define AC_S15    ACTION_MODS_KEY(MOD_LSFT, KC_BSLS)
#define AC_S16    ACTION_MODS_KEY(MOD_LSFT, KC_COMM)
#define AC_S17    ACTION_MODS_KEY(MOD_LSFT, KC_DOT)
#define AC_S18    ACTION_MODS_KEY(MOD_LSFT, KC_SLSH)
#define AC_S19    ACTION_MODS_KEY(MOD_LSFT, KC_SCLN)
#define AC_S20    ACTION_MODS_KEY(MOD_LSFT, KC_QUOT)
#define AC_S21    ACTION_MODS_KEY(MOD_LSFT, KC_GRV)
#define AC_S22    ACTION_MODS_KEY(MOD_LSFT, KC_P)

#define AC_M1    ACTION_MODS_KEY(MOD_LGUI, 1)
#define AC_M2    ACTION_MODS_KEY(MOD_LGUI, 2)

const action_t PROGMEM actionmaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Alt qwerty for colemak
    [0] = ACTIONMAP( \
    Q,      W,      E,      R,      T,      Y,      U,      I,      O,      ENT, \
    A,      S,      D,      F,      G,      H,      J,      K,      L,      SCLN, \
    TM2,    TM3,    TM4,    TL6a,   TL5a,   TL3,    TL4,    TL9,    BSPACE, TM1),

    // Base qwerty
    [1] = ACTIONMAP( \
    Q,      W,      E,      R,      T,      Y,      U,      I,      O,      P, \
    A,      S,      D,      F,      G,      H,      J,      K,      L,      ENT, \
    TM2,    TM3,    TM4,    TL6,    TL5,    TL3,    TL4,    TL9,    BSPACE, TM1),


    // Base colemak
    [2] = ACTIONMAP( \
    Q,      W,      F,      P,      G,      J,      L,      U,      Y,      ENT, \
    A,      R,      S,      T,      D,      H,      N,      E,      I,      O, \
    TM2,    TM3,    TM4,    TL6,    TL5,    TL3a,    TL4,   TL9,    BSPACE, TM1),
    


    // Numbers
    [3] = ACTIONMAP( \
    1,      2,      3,      4,      5,      6,      7,      8,      9,      0, \
    F1,     F2,     F3,     F4,     F5,     F6,     F7,     F8,     F9,     F10, \
    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,    TRNS,   TRNS,   TRNS,   TRNS,   TRNS),
    // Numbers (shifted)
    [4] = ACTIONMAP( \
    S01,    S02,    S03,    S04,    S05,    S06,    S07,    S08,    S09,    S10, \
    F11,    F12,    TRNS,   TRNS,   TRNS,   TRNS,   LEFT,   DOWN,   UP,   RIGHT, \
    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   LEFT,   DOWN, RIGHT),

    // Punctuation
    [5] = ACTIONMAP( \
    S21,    GRV,    TRNS,   TRNS,   TRNS,   MINS,   EQL,    LBRC,   RBRC,   BSLS, \
    TAB,    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   SCLN,   QUOT,   TRNS, \
    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   COMM,   DOT,    SLSH),
    // Punctuation (shifted)
    [6] = ACTIONMAP( \
    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   S11,    S12,    S13,    S14,    S15, \
    TAB,    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   S19,    S20,    TRNS, \
    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   S16,    S17,    S18),

    // Punctuation (alt cm)
    [7] = ACTIONMAP( \
    S21,    GRV,    TRNS,   TRNS,   TRNS,   MINS,   EQL,    LBRC,   RBRC,   BSLS, \
    TAB,    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   P,      QUOT,   TRNS, \
    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   COMM,   DOT,    SLSH),
    // Punctuation (alt cm - shifted)
    [8] = ACTIONMAP( \
    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   S11,    S12,    S13,    S14,    S15, \
    TAB,    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   S22,    S20,    TRNS, \
    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   S16,    S17,    S18),

    // system
    [9] = ACTIONMAP( \
    LS0,    LS1,    LS2,    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,    TRNS,    TRNS, \
    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,    TRNS,    TRNS, \
    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,    TRNS,    TRNS),
};