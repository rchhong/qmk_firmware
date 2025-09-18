# Build Options
#   change to "no" to disable the options, or define them in the Makefile in
#   the appropriate keymap folder that will get included automatically
#
VIA_ENABLE = yes # VIA support
WPM_ENABLE = yes # WPM Counter
LTO_ENABLE = yes # smaller binaries
BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes        # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
AUDIO_ENABLE = no           # Audio output
RGBLIGHT_ENABLE = no       # Enable WS2812 RGB underlight.
SWAP_HANDS_ENABLE = no      # Enable one-hand typing
OLED_ENABLE = yes			# OLED display
OLED_DRIVER = ssd1306
SPLIT_KEYBOARD = yes


# If you want to change the display of OLED, you need to change here
# SRC +=  ./lib/logo_reader.c \
#         ./lib/mode_icon_reader.c \
