/* Copyright 2019 sasaplus1
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

#define KN_KANA KC_LANG1
#define KN_EISU KC_LANG2

#define KN_SPC LT(1, KC_SPC)

#define KN_VLDN KC__VOLDOWN
#define KN_VLDQ LSFT(LALT(KC__VOLDOWN))
#define KN_VLUP KC__VOLUP
#define KN_VLUQ LSFT(LALT(KC__VOLUP))
#define KN_MUTE KC__MUTE

// Defines the keycodes used by our macros in process_record_user
//enum custom_keycodes {
//  QMKBEST = SAFE_RANGE,
//  QMKURL
//};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
      KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_CIRC, KC_BSLS, KC_BSPC, \
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_AT,   KC_LBRC, \
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_COLN, KC_RBRC, KC_ENT,  \
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_UNDS, KC_RSFT, \
      KC_LCTL, KC_LALT, KC_LGUI, KN_EISU, KC_SPC, KN_SPC, KN_KANA, KC_RGUI, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT \
  ),
  [1] = LAYOUT(
      _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, KN_VLDN, KN_VLDQ, KN_VLUQ, KN_VLUP, KN_MUTE, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
  ),
};

bool swap_key_with_shift(char c) {
    /**
     * NOTE: https://github.com/leopard-gecko/planck_mac_win
     */

    bool lshift = keyboard_report->mods & MOD_BIT(KC_LSFT);
    bool rshift = keyboard_report->mods & MOD_BIT(KC_RSFT);

    if (lshift || rshift) {
        if (lshift) unregister_code(KC_LSFT);
        if (rshift) unregister_code(KC_RSFT);

        send_char(c);

        if (lshift) register_code(KC_LSFT);
        if (rshift) register_code(KC_RSFT);

        return true;
    }

    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case KC_2:    if (swap_key_with_shift('"'))  return false;
            case KC_6:    if (swap_key_with_shift('&'))  return false;
            case KC_7:    if (swap_key_with_shift('\'')) return false;
            case KC_8:    if (swap_key_with_shift('('))  return false;
            case KC_9:    if (swap_key_with_shift(')'))  return false;
            case KC_0:    if (swap_key_with_shift('0'))  return false;
            case KC_MINS: if (swap_key_with_shift('='))  return false;
            case KC_CIRC: if (swap_key_with_shift('~'))  return false;
            case KC_AT:   if (swap_key_with_shift('`'))  return false;
            case KC_SCLN: if (swap_key_with_shift('+'))  return false;
            case KC_COLN: if (swap_key_with_shift('*'))  return false;
        }
    }

    return true;
}

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   switch (keycode) {
//     case QMKBEST:
//       if (record->event.pressed) {
//         // when keycode QMKBEST is pressed
//         SEND_STRING("QMK is the best thing ever!");
//       } else {
//         // when keycode QMKBEST is released
//       }
//       break;
//     case QMKURL:
//       if (record->event.pressed) {
//         // when keycode QMKURL is pressed
//         SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
//       } else {
//         // when keycode QMKURL is released
//       }
//       break;
//   }
//   return true;
// }

// void matrix_init_user(void) {
//
// }
//
// void matrix_scan_user(void) {
//
// }
//
// void led_set_user(uint8_t usb_led) {
//
// }
