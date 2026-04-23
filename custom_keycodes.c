#include "custom_keycodes.h"

#define SHIFT_NUM(custom_key, normal_key, number_key) \
case custom_key: \
    if (record->event.pressed) { \
        uint8_t mods = get_mods(); \
        uint8_t weak = get_weak_mods(); \
        uint8_t oneshot = get_oneshot_mods(); \
        bool shifted = (mods | weak | oneshot) & MOD_MASK_SHIFT; \
        \
        del_mods(MOD_MASK_SHIFT); \
        del_weak_mods(MOD_MASK_SHIFT); \
        del_oneshot_mods(MOD_MASK_SHIFT); \
        \
        if (shifted) { \
            tap_code16(number_key); \
        } else { \
            tap_code16(normal_key); \
        } \
        \
        set_mods(mods); \
        set_weak_mods(weak); \
        set_oneshot_mods(oneshot); \
    } \
    return false;

bool process_shift_nums(uint16_t keycode, keyrecord_t *record) {

    switch (keycode) {
        // SHIFT_NUM(PLUS_1, BR_PLUS, BR_1)
        // SHIFT_NUM(LBRC_2, BR_LBRC, BR_2)
        // SHIFT_NUM(LCBR_3, BR_LCBR, BR_3)
        // SHIFT_NUM(LPRN_4, BR_LPRN, BR_4)
        // SHIFT_NUM(AMPR_5, BR_AMPR, BR_5)
        // SHIFT_NUM(EQL_6, BR_EQL, BR_6)
        // SHIFT_NUM(RBRC_7, BR_RBRC, BR_7)
        // SHIFT_NUM(RCBR_8, BR_RCBR, BR_8)
        // SHIFT_NUM(RPRN_9, BR_RPRN, BR_9)
        // SHIFT_NUM(ASTR_0, BR_ASTR, BR_0)
        // SHIFT_NUM(DLR_TILD, BR_DLR, BR_TILD)
        // SHIFT_NUM(EXLM_PERC, BR_EXLM, BR_PERC)
        // SHIFT_NUM(HASH_AT, BR_HASH, BR_AT)
        // SHIFT_NUM(ACUT_CIRC, BR_ACUT, BR_CIRC)
        // SHIFT_NUM(COLN_SCLN, BR_COLN, BR_SCLN)
        // SHIFT_NUM(GRV_DIAE, BR_GRV, BR_DIAE)

        SHIFT_NUM(D1_6, KC_1, KC_6)
        SHIFT_NUM(D2_7, KC_2, KC_7)
        SHIFT_NUM(D3_8, KC_3, KC_8)
        SHIFT_NUM(D4_9, KC_4, KC_9)
        SHIFT_NUM(D5_0, KC_5, KC_0)

        SHIFT_NUM(LR_BRC, BR_LBRC, BR_RBRC)
        SHIFT_NUM(LR_CBR, BR_LCBR, BR_RCBR)
        SHIFT_NUM(LR_PRN, KC_LPRN, KC_RPRN)
        SHIFT_NUM(AT_HASH, KC_AT, KC_HASH)

        SHIFT_NUM(PERC_BSLS, KC_PERC, BR_BSLS)
        SHIFT_NUM(PLUS_ASTR, KC_PLUS, KC_ASTR)
        SHIFT_NUM(EQL_EXLM, KC_EQL, KC_EXLM)
        SHIFT_NUM(AMPR_PIPE, KC_AMPR, BR_PIPE)
        SHIFT_NUM(DQUO_QUOT, BR_DQUO, BR_QUOT)

        // SHIFT_NUM(COLN_SCLN, BR_COLN, BR_SCLN)
        SHIFT_NUM(UNDS_MINS, KC_UNDS, KC_MINS)

        // abnt2
        SHIFT_NUM(DLR_DIAE, KC_DLR, BR_DIAE)
        SHIFT_NUM(ACUT_GRV, BR_ACUT, BR_GRV)
        SHIFT_NUM(TILD_CIRC, BR_TILD, BR_CIRC)
    }

    return true;
}
