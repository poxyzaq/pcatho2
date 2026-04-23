// Copyright 2026 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#include "keycodes.h"
// clang-format off

#define QMK_BRAZILIAN_ABNT2_KEYCODES_VERSION "0.0.1"
#define QMK_BRAZILIAN_ABNT2_KEYCODES_VERSION_BCD 0x00000001
#define QMK_BRAZILIAN_ABNT2_KEYCODES_VERSION_MAJOR 0
#define QMK_BRAZILIAN_ABNT2_KEYCODES_VERSION_MINOR 0
#define QMK_BRAZILIAN_ABNT2_KEYCODES_VERSION_PATCH 1

// Aliases
#define BR_QUOT KC_GRV  // '
#define BR_6    KC_6    // 6
#define BR_ACUT KC_LBRC // ´ (dead)
#define BR_LBRC KC_RBRC // [
#define BR_CCED KC_SCLN // Ç
#define BR_TILD KC_QUOT // ~ (dead)
#define BR_RBRC KC_BSLS // ]
#define BR_BSLS KC_NUBS // (backslash)
#define BR_SCLN KC_SLSH // ;
#define BR_DQUO S(BR_QUOT) // "
#define BR_DIAE S(BR_6)    // ¨ (dead)
#define BR_GRV  S(BR_ACUT) // ` (dead)
#define BR_LCBR S(BR_LBRC) // {
#define BR_CIRC S(BR_TILD) // ^ (dead)
#define BR_RCBR S(BR_RBRC) // }
#define BR_PIPE S(BR_BSLS) // |
#define BR_COLN S(BR_SCLN) // :
#define BR_SLSH KC_INT1 // /
#define BR_SUP1 ALGR(BR_1)    // ¹
#define BR_SUP2 ALGR(BR_2)    // ²
#define BR_SUP3 ALGR(BR_3)    // ³
#define BR_PND  ALGR(BR_4)    // £
#define BR_CENT ALGR(BR_5)    // ¢
#define BR_NOT  ALGR(BR_6)    // ¬
#define BR_SECT ALGR(BR_EQL)  // §
#define BR_DEG  ALGR(BR_E)    // °
#define BR_FORD ALGR(BR_LBRC) // ª
#define BR_MORD ALGR(BR_RBRC) // º
#define BR_CRUZ ALGR(BR_C)    // ₢
