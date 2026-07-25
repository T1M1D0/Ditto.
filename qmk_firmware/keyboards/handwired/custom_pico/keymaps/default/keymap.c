#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        /* Row 0 */
        KC_ESC,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,
        /* Row 1 */
        KC_UP,   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        /* Row 2 */
        KC_DOWN, KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
        /* Row 3 */
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
        /* Row 4 */
        KC_LCTL,          KC_LALT, KC_SPC,  KC_LGUI,

        /* Row 5 */
        KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQUAL, KC_BSPC,
        /* Row 6 */
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        /* Row 7 */
        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        /* Row 8 */
        KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LEFT, KC_RIGHT,
        /* Row 9 */
        KC_SPC,           KC_RALT,          MO(1)
    ),
    [1] = LAYOUT(
        /* Row 0 */
        KC_TRNS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,
        /* Row 1 */
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        /* Row 2 */
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        /* Row 3 */
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        /* Row 4 */
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,

        /* Row 5 (This is where your numbers are—mapping F1-F4 here) */
        KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11, KC_F12, KC_TRNS,
        /* Row 6 */
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        /* Row 7 */
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        /* Row 8 */
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        /* Row 9 */
        KC_TRNS,          KC_TRNS,          KC_TRNS
    )
};
