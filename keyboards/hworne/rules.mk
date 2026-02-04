# Bootloader selection
MCU = RP2040
BOOTLOADER = rp2040
BOOTMAGIC_ENABLE = yes
SPLIT_KEYBOARD = yes
SERIAL_DRIVER = vendor
SRC += combos.c
TAP_DANCE_ENABLE = yes
VIA_ENABLE = yes
COMBO_ENABLE = yes
MOUSEKEY_ENABLE = yes
REPEAT_KEY_ENABLE = yes
TRI_LAYER_ENABLE = yes
EXTRAKEY_ENABLE = yes        # Для медиа-клавиш
CAPS_WORD_ENABLE = yes    # Для Caps Word через комбо
BACKLIGHT_ENABLE = yes
