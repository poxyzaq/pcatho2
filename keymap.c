#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

#include "custom_abnt2.h"
#include "custom_keycodes.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x5(
  //,-------------------------------------------.    ,--------------------------------------------.
      KC_W, KC_L, KC_Y, KC_P, KC_B, 			KC_Z, KC_F, KC_O, KC_U, BR_SCLN,
  //|--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------|
      LGUI_T(KC_C), LALT_T(KC_R),
      LCTL_T(KC_S), LSFT_T(KC_T), KC_G, 				KC_M, RSFT_T(KC_N), RCTL_T(KC_E),
      							                        RALT_T(KC_I), LGUI_T(KC_A),
  //|--------+--------+--------+--------+--------'    `--------+--------+--------+--------+--------|
      KC_Q, KC_J, KC_V, KC_D, KC_K,                     KC_X, KC_H, BR_SLSH, KC_COMM, KC_DOT,
  //|--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------|
      KC_TRNS, KC_TAB, LT(1,KC_SPC),              LT(2,KC_BSPC), KC_ENT, KC_TRNS
                 //`--------------------------'     `--------------------------'
  ),
   [1] = LAYOUT_split_3x5(
  //,----------------------------------------------.,-----------------------------------------.
      KC_ESC, KC_PSCR, KC_NO, KC_NO, KC_NO,            KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_MPLY,
  //|--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------|
      KC_NO, KC_H, KC_J, KC_K, KC_L,                   KC_NO, UNDS_MINS, DQUO_QUOT, ACUT_GRV, BR_CCED,
  //|--------+--------+--------+---------+--------' `--------+--------+--------+--------+--------|
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  //|--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------|
                    KC_TRNS, KC_TRNS, KC_TRNS,         KC_BSPC, KC_ENT, KC_TRNS
                    //`--------------------------'  `--------------------------'
  ),
   [2] = LAYOUT_split_3x5(
  //,-------------------------------------------.    ,--------------------------------------------.
      D1_6, D2_7, D3_8, D4_9, D5_0,                     KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_END,
  //|--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------|
      PLUS_ASTR, LR_BRC, LR_CBR, LR_PRN, EQL_EXLM,      KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_DEL,
  //|--------+--------+--------+--------+--------'    `--------+--------+--------+--------+--------|
      TILD_CIRC, PERC_BSLS, AT_HASH,
      AMPR_PIPE, DLR_DIAE,        			KC_CUT, KC_COPY, KC_PASTE, KC_UNDO, KC_FIND,
  //|--------+--------+--------+--------+--------.    ,--------+--------+--------+--------+--------|
                           KC_TRNS, KC_TAB, KC_SPC,    KC_TRNS, KC_TRNS, KC_TRNS
                    //`--------------------------'    i--------------------------'
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return process_shift_nums(keycode, record);
}
