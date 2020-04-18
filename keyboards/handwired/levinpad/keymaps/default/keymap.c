#include QMK_KEYBOARD_H
#include "quantum.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Numpad
 * ,-----------------------------------------.
 * |   0  |   1  |   4  |   7  | BkSp |OSL(1)|
 * |------+------+------+------+------+------|
 * |   ,  |   2  |   5  |   8  |   /  | Down |
 * |------+------+------+------+------+------|
 * |   .  |   3  |   6  |   9  |   *  | Up   |
 * |------+------+------+------+------+------|
 * |    Enter    |   +  |   -  |   =  | Calc |
 * `-----------------------------------------'
 */
[0] = LAYOUT_kc_ortho_4x6( \
    KP_0,     KP_1, KP_4,    KP_7,     BSPACE,      ESC, \
    COMMA,    KP_2, KP_5,    KP_8,     KP_SLASH,    DOWN,\
    KP_DOT,   KP_3, KP_6,    KP_9,     KP_ASTERISK, UP,  \
    KP_ENTER, NO,   KP_PLUS, KP_MINUS, KP_EQUAL,    CALC \
  )
};
