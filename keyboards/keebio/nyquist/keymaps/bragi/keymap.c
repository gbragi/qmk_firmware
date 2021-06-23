#include QMK_KEYBOARD_H

enum layer_names {
    BASE,
    NAV,
};

// Defines for task manager and such
#define CALTDEL LCTL(LALT(KC_DEL))
#define TSKMGR LCTL(LSFT(KC_ESC))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = LAYOUT_ortho_4x12(
  KC_Q,          KC_W,           KC_E,            KC_R,              KC_T,              KC_NO,             KC_NO,             KC_Y,              KC_U,              KC_I,            KC_O,            KC_P,
  LGUI_T(KC_A),  LALT_T(KC_S),   LCTL_T(KC_D),    LSFT_T(KC_F),      KC_G,              KC_NO,             KC_NO,             KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),    LALT_T(KC_L),    LGUI_T(KC_QUOT),
  KC_Z,          ALGR_T(KC_X),   KC_C,            KC_V,              KC_B,              KC_NO,             KC_NO,             KC_N,              KC_M,              KC_COMM,         ALGR_T(KC_DOT),  KC_SLSH,
  KC_NO,         KC_NO,          KC_NO,           LT(NAV, KC_ESC),  LT(NAV, KC_SPC),  LT(NAV, KC_TAB),  LT(NAV, KC_ENT),  LT(NAV, KC_BSPC),  LT(NAV, KC_DEL),  KC_NO,           KC_NO,           KC_NO
),

[NAV] = LAYOUT_ortho_4x12(
  KC_ESC,  KC_EXLM,  KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
  _______, KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, _______,
  _______, KC_F7,    KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, KC_MUTE, _______, KC_PIPE,
  _______, _______,  _______, _______, _______, KC_BSPC, KC_BSPC, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
)
};

