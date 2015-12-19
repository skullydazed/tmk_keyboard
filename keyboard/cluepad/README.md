Cluepad keyboard firmware
=========================
DIY compact keypad designed by skullY

## Clueboard Resources
- [FIXME](http://link/some/stuff/already)


## Build
Move to this directory then just run `make` like:

    $ make

## Keymap
Several version of keymap are available in advance but you are recommended to define your favorite layout yourself. To define your own keymap create file named `keymap_<name>.c` and see keymap document(you can find in top README.md) and existent keymap files.

To build firmware binary hex file with a certain keymap just do `make` with `KEYMAP` option like:

    $ make KEYMAP=[default|<name>]


### 1  default
[keymap_default.c](keymap_default.c) basic numpad with numlock controlling backlight

#### 1.0 Default layer
FIXME: Add ascii art
