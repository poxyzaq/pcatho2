#pragma once
#include QMK_KEYBOARD_H

#include "custom_abnt2.h"

enum custom_keycodes {
    D1_6 = SAFE_RANGE,
    D2_7,
    D3_8,
    D4_9,
    D5_0,

    LR_BRC,
    LR_CBR,
    LR_PRN,
    AT_HASH,
    PERC_BSLS,
    PLUS_ASTR,
    AMPR_PIPE,
    EQL_EXLM,
    DLR_DIAE,
    TILD_CIRC,
    DQUO_QUOT,
    UNDS_MINS,

    // COLN_SCLN,
    ACUT_GRV
};

bool process_shift_nums(uint16_t keycode, keyrecord_t *record);
