#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Base layer
  * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
  * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ ` │BS │
  * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
  * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │'  │[  │     │
  * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐Ent │
  * │Fn    │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │:  │]  │    │
  * ├───┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┤
  * │LSt│N/A│ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ \ │ ↑ │E/J│
  * ├───┴┬──┴─┬─┴──┬┴───┴───┼───┴┬──┴───┴───┼───┼───┼───┼───┼───┤
  * │LCtl│LGui│LAlt│N/A     │Spc │N/A       │RAl│RCt│ ← │ ↓ │ → │
  * └────┴────┴────┴────────┴────┴──────────┴───┴───┴───┴───┴───┘
  */
  LAYOUT_60_nagino_asukara( \
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_GRV,  KC_BSPC,  \
    KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT, KC_LBRC,           \
    MO(1),            KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_COLN, KC_RBRC, KC_ENT,   \
    KC_LSFT, XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS, KC_UP,   KC_LANG5, \
    KC_LCTL, KC_LGUI,          KC_LALT, XXXXXXX,          KC_SPC,           XXXXXXX,          KC_RCTL, KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT   \
  ),

  /* Function layer
  * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
  * │00 │F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│   │Del│
  * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
  * │     │MC1│MC2│   │   │   │   │   │   │   │   │MS↑│   │     │
  * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
  * │∇     │VUp│VDn│Mut│   │   │ * │ / │   │   │MS←│MS↓│MS→│    │
  * ├───┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┤
  * │   │N/A│RGB│HUI│HUD│VAI│VAD│ + │ - │   │   │BLS│BLT│PgU│   │
  * ├───┴┬──┴─┬─┴──┬┴───┴───┼───┴┬──┴───┴───┼───┼───┼───┼───┼───┤
  * │LCtl│LGui│LAlt│N/A     │    │N/A       │RAl│RCt│Hm │PgD│Ed │
  * └────┴────┴────┴────────┴────┴──────────┴───┴───┴───┴───┴───┘
  */
  LAYOUT_60_nagino_asukara( \
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_DEL,  \
    XXXXXXX,          KC_BTN1, KC_BTN2, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MS_U, XXXXXXX,          \
    XXXXXXX,          KC_VOLU, KC_VOLD, KC_MUTE, XXXXXXX, XXXXXXX, KC_PAST, KC_PSLS, XXXXXXX, XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX,  \
    XXXXXXX, XXXXXXX, RGB_TOG, RGB_HUI, RGB_HUD, RGB_VAI, RGB_VAD, KC_PPLS, KC_PMNS, XXXXXXX, XXXXXXX, BL_STEP, BL_TOGG, KC_PGUP, XXXXXXX, \
    _______, _______,          _______, XXXXXXX,          XXXXXXX,          XXXXXXX,          _______, _______, KC_HOME, KC_PGDN, KC_END   \
  )
};
