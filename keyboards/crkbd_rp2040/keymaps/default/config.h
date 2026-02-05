#pragma once

//#define USE_MATRIX_I2C
#define SPLIT_USB_DETECT
#define SPLIT_WATCHDOG_ENABLE
#define USE_SERIAL
#define SERIAL_USART_FULL_DUPLEX
//#define QUICK_TAP_TERM 0
//#define TAPPING_TERM 100
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
// Время (мс) для активации комбо (по умолчанию 50)
#define COMBO_TERM 40

// Обработка модификаторов в комбо
#define COMBO_MUST_HOLD_MODS      // Комбо сработает только при удержании модификаторов
#define COMBO_MOD_TERM 200        // Таймаут для модификаторов

// Игнорировать быстрые нажатия
#define COMBO_IGNORE_MOD_TAP_INTERRUPT

// Разрешить комбо на разных слоях
#define COMBO_ONLY_FROM_LAYER 0   // Только с базового слоя
// Или разрешить со всех:
// #define COMBO_ALLOW_ACTION_KEYS


#ifdef RGBLIGHT_ENABLE
    #define RGB_DI_PIN GP0          // ⚠️ ЗАМЕНИ на реальный пин Pandakb
    #define RGBLED_COUNT 12
    #define RGBLIGHT_SPLIT
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_RGB_TEST
    #define RGBLIGHT_EFFECT_ALTERNATING
    #define RGBLIGHT_EFFECT_TWINKLE
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif


//#define USE_MATRIX_I2C

//#define QUICK_TAP_TERM 0
//#define TAPPING_TERM 100
