// combos.c
#include QMK_KEYBOARD_H

enum combo_events {
  YU_RBRC,
  RT_LBRC,
  COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM combo_yu_rbrc[] = {KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM combo_rt_lbrc[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM combo_hj_0[] = {KC_H, KC_J, COMBO_END};
const uint16_t PROGMEM combo_fg_9[] = {KC_F, KC_G, COMBO_END};

const combo_t key_combos[] = {
  [YU_RBRC] = COMBO(combo_yu_rbrc, KC_RBRC),
  [RT_LBRC] = COMBO(combo_rt_lbrc, KC_LBRC),
  [HJ_0] = COMBO(combo_hj_0, KC_0),
 [FG_9] = COMBO(combo_fg_9, KC_9)
};
