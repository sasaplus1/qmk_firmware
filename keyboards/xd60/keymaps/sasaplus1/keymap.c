#include QMK_KEYBOARD_H

#define _BASE 0
#define _FN 1

#define FN_VDW1 KC__VOLDOWN
#define FN_VDW2 LALT(LSFT(KC__VOLDOWN))
#define FN_VUP1 KC__VOLUP
#define FN_VUP2 LALT(LSFT(KC__VOLUP))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT_all(
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, XXXXXXX, \
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          XXXXXXX, \
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS,          KC_ENT,  \
      KC_LSFT, XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, XXXXXXX, KC_RSFT, XXXXXXX, \
      KC_LALT, KC_LGUI, KC_HANJ,                            KC_SPC,                             KC_HAEN, KC_RGUI, XXXXXXX, KC_RCTL, MO(_FN)  \
  ),

  [_FN] = LAYOUT_all(
      KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_F13,  KC_F14,  \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, \
      _______, _______, _______, _______, _______, _______, FN_VDW1, FN_VDW2, FN_VUP2, FN_VUP1, _______, _______, _______,          _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______  \
  ),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}
