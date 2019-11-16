#include QMK_KEYBOARD_H

/* "Starpad"
 * Space-sim layout as a compact keyboard to go between other peripherals
 * for controlling first-person character movement in and out of combat
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Movement / Utility Layer
 * ,-----------------------------------------------------------------------------------.
 * | L(1) |   C  |   A  |   Z  |  F12 | Esc  |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |   B  |   S  |   W  |  F11 |  F1  |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shft |   6  |   D  |   T  |   [  |  F2  |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |    Space    |   F  |   4  |   ]  |  F4  |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[0] = LAYOUT_ortho_4x12( \
TO(1),     KC_C,  KC_A, KC_Z, KC_F12,  KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
KC_LCTRL,  KC_B,  KC_S, KC_W, KC_F11,  KC_F1,  KC_NO, KC_A,  KC_B,  KC_C,  KC_D,  KC_NO, \
KC_LSHIFT, KC_6,  KC_D, KC_T, KC_LBRC, KC_F2,  KC_NO, KC_E,  KC_F,  KC_G,  KC_H,  KC_NO, \
KC_SPACE,  KC_NO, KC_F, KC_4, KC_RBRC, KC_F4,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO  \
),
/* Combat Layer
 * ,-----------------------------------------.
 * | L(0) |      |      |   Q  |   1  |      |
 * |------+------+------+------+------+------|
 * |      |   X  |      |      |   2  |      |
 * |------+------+------+------+------+------|
 * |      |   V  |      |   E  |   3  |  U   |
 * |------+------+------+------+------+------|
 * |             |      |      |   G  |  5   |
 * `-----------------------------------------'
 */
[1] = LAYOUT_ortho_4x12( \
TO(0),   _______, _______, KC_Q,    KC_1, _______, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
_______, KC_X,    _______, _______, KC_2, _______, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
_______, KC_V,    _______, KC_E,    KC_3, KC_U,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
_______, KC_NO,   _______, _______, KC_G, KC_5,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO  \
)
};
