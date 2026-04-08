#pragma once
#include QMK_KEYBOARD_H

#include "custom_abnt2.h"

enum custom_keycodes {
    PLUS_1 = SAFE_RANGE,
    LBRC_2,
    LCBR_3,
    LPRN_4,
    AMPR_5,
    EQL_6,
    RBRC_7,
    RCBR_8,
    RPRN_9,
    ASTR_0,
    EXLM_PERC,
    HASH_AT,
    DLR_TILD,
    GRV_DIAE,
    ACUT_CIRC,
    COLN_SCLN
};

bool process_shift_nums(uint16_t keycode, keyrecord_t *record);
