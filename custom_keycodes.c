#include "custom_keycodes.h"

#define SHIFT_NUM(custom_key, normal_key, number_key) \
case custom_key: \
    if (record->event.pressed) { \
        if (get_mods() & MOD_MASK_SHIFT) { \
            del_mods(MOD_MASK_SHIFT); \
            tap_code16(number_key); \
            set_mods(MOD_MASK_SHIFT); \
        } else { \
            tap_code16(normal_key); \
        } \
    } \
    return false;

bool process_shift_nums(uint16_t keycode, keyrecord_t *record) {

    switch (keycode) {
        SHIFT_NUM(PLUS_1, BR_PLUS, BR_1)
        SHIFT_NUM(LBRC_2, BR_LBRC, BR_2)
        SHIFT_NUM(LCBR_3, BR_LCBR, BR_3)
        SHIFT_NUM(LPRN_4, BR_LPRN, BR_4)
        SHIFT_NUM(AMPR_5, BR_AMPR, BR_5)
        SHIFT_NUM(EQL_6, BR_EQL, BR_6)
        SHIFT_NUM(RBRC_7, BR_RPRN, BR_7)
        SHIFT_NUM(RCBR_8, BR_RCBR, BR_8)
        SHIFT_NUM(RPRN_9, BR_RBRC, BR_9)
        SHIFT_NUM(ASTR_0, BR_ASTR, BR_0)
        SHIFT_NUM(DLR_TILD, BR_DLR, BR_TILD)
        SHIFT_NUM(EXLM_PERC, BR_EXLM, BR_PERC)
        SHIFT_NUM(HASH_AT, BR_HASH, BR_AT)
        SHIFT_NUM(ACUT_CIRC, BR_ACUT, BR_CIRC)
        SHIFT_NUM(COLN_SCLN, BR_COLN, BR_SCLN)
        SHIFT_NUM(GRV_DIAE, BR_GRV, BR_DIAE)
    }

    return true;
}
