CNC Pad
======================
DIY compact keypad designed by skully


## Build
Move to this directory then just run `make` like:

    $ make

Use `make -f Makefile.pjrc` if you want to use PJRC stack but I find no reason to do so now.


## Keymap
Several version of keymap are available in advance but you are recommended to define your favorite layout yourself. To define your own keymap create file named `keymap_<name>.c` and see keymap document(you can find in top README.md) and existent keymap files.

To build firmware binary hex file with a certain keymap just do `make` with `KEYMAP` option like:

    $ make KEYMAP=[cnc|<name>]


### 1  CNC Layout
[keymap_cnc.c](keymap_cnc.c)

#### 1.0 Default layer
    ,---------------------------------------.
    | ESC   | F1    | F3    | [     | ]     |
    |---------------------------------------|
    | 2     | 4     | 6     | 8     | 0     |
    |---------------------------------------|
    |---------------------------------------|
    |       | Up    |       |       | PgUp  |
    |---------------------------------------|
    | Left  | Down  | Rite  |       | PgDn  |
    `---------------------------------------'
