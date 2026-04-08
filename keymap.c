#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

#include "custom_keycodes.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x5(
  //,-------------------------------------------.    ,--------------------------------------------.
      BR_W,    BR_L,    BR_Y,    BR_P,    BR_B,       BR_Z,    BR_F,    BR_O,    BR_U,    BR_QUOT,
  //|--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------|
      LGUI_T(BR_C), LALT_T(BR_R),
      LCTL_T(BR_S), LSFT_T(BR_T), BR_G,               BR_M, RSFT_T(BR_N), RCTL_T(BR_E),
                                                      LALT_T(BR_I), RGUI_T(BR_A),
  //|--------+--------+--------+--------+--------'    `--------+--------+--------+--------+--------|
      BR_Q, RALT_T(BR_J), BR_V,  BR_D,    BR_K,           BR_X, BR_H, BR_SLSH, RALT_T(BR_COMM), BR_DOT,
  //|--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------|
                    BR_TRNS, LT(3, BR_TAB),  LT(1,BR_SPC),   LT(2,BR_BSPC), BR_ENT, BR_TRNS
                 //`--------------------------'     `--------------------------'
  ),
  
 
  
  [1] = LAYOUT_split_3x5(
  //,----------------------------------------------.,-----------------------------------------.
      BR_NO, BR_NO,  BR_NO, BR_NO, BR_NO,       KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, BR_NO,
  //|--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------|
      CW_TOGG,  BR_W,  COLN_SCLN,   BR_ESC,    BR_NO,     KC_MPLY,   BR_NO,  BR_NO,  BR_NO,  BR_NO,
  //|--------+--------+--------+---------+--------' `--------+--------+--------+--------+--------|
      BR_PSCR,    BR_NO,   BR_NO,   BR_NO,   BR_NO,      BR_NO,   BR_NO,   BR_NO,   ACUT_CIRC,   GRV_DIAE,
  //|--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------|
                       BR_TRNS,   BR_TRNS, BR_TRNS,      BR_TRNS, BR_TRNS, BR_TRNS
                    //`--------------------------'  `--------------------------'
  ),
  
   [2] = LAYOUT_split_3x5(
  //,-------------------------------------------.    ,--------------------------------------------.
      PLUS_1, LBRC_2, LCBR_3, LPRN_4, AMPR_5,    	BR_HOME, BR_PGDN, BR_PGUP, BR_END, BR_PAUS,
  //|--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------|
      EQL_6,  RBRC_7,  RCBR_8,  RPRN_9,  ASTR_0,       BR_LEFT, BR_DOWN, BR_UP,   BR_RGHT, BR_DEL,
  //|--------+--------+--------+--------+--------'    `--------+--------+--------+--------+--------|
      BR_MINS, EXLM_PERC, BR_BSLS, DLR_TILD, HASH_AT, 	KC_CUT,  KC_COPY,   KC_PASTE,   KC_UNDO,   KC_FIND,
  //|--------+--------+--------+--------+--------.    ,--------+--------+--------+--------+--------|
                        BR_TRNS, BR_TRNS, BR_TRNS,      BR_TRNS, BR_TRNS, BR_TRNS
                    //`--------------------------'    i--------------------------'
  ),
  
  [3] = LAYOUT_split_3x5(
  //,----------------------------------------------.,-----------------------------------------.
      BR_F1, BR_F2,  BR_F3, BR_F4, BR_F5,       	BR_NUM, BR_SCRL, BR_NO, BR_NO, BR_NO,
  //|--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------|
      BR_F6,  BR_F7,   BR_F8,   BR_F9,    BR_F10,     	BR_NO,   BR_NO,  BR_NO,  BR_NO,  BR_NO,
  //|--------+--------+--------+---------+--------' `--------+--------+--------+--------+--------|
      BR_F11,    BR_F12,   BR_NO,   BR_NO,   BR_NO,      BR_NO,   BR_NO,   BR_NO,   BR_NO,   BR_NO,
  //|--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------|
                       BR_TRNS,   BR_TRNS, BR_TRNS,      BR_TRNS, BR_TRNS, BR_TRNS
                    //`--------------------------'  `--------------------------'
)

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return process_shift_nums(keycode, record);
}
