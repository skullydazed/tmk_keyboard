Monarch keyboard firmware
=========================
DIY compact keyboard designed by koalapear, PCB designed by skullY.

## Monarch Resources
- [FIXME](http://link/some/stuff/already)


## Build
Move to this directory then just run `make` like:

    $ make


## Keymap
Several version of keymap are available in advance but you are recommended to define your favorite layout yourself. To define your own keymap create file named `keymap_<name>.c` and see keymap document(you can find in top README.md) and existent keymap files.

To build firmware binary hex file with a certain keymap just do `make` with `KEYMAP` option like:

    $ make KEYMAP=[poker|poker_set|poker_bit|plain|hasu|spacefn|hhkb|<name>]


### 1  fc660m
[keymap_fc660m.c](keymap_fc660m.c) emulates original fc660m layers

    Fn + Esc = `
    Fn + {left, down, up, right}  = {home, pgdown, pgup, end}

#### 1.0 Default ANSI layer
    FIXME

#### 1.1 Default Fn Layer
    FIXME
