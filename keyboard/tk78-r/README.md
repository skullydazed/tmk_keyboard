Clueboard keyboard firmware
===========================
DIY compact keyboard designed by Sentraq, PCB designed by skullydazed.

## TK78 Resources
- [FIXME](http://link/some/stuff/already)


## Build
Move to this directory then just run `make` like:

    $ make

Use `make -f Makefile.pjrc` if you want to use PJRC stack but I find no reason to do so now.


## Keymap
Several version of keymap are available in advance but you are recommended to define your favorite layout yourself. To define your own keymap create file named `keymap_<name>.c` and see keymap document(you can find in top README.md) and existent keymap files.

To build firmware binary hex file with a certain keymap just do `make` with `KEYMAP` option like:

    $ make KEYMAP=[poker|poker_set|poker_bit|plain|hasu|spacefn|hhkb|<name>]


### 1  fc660m
[keymap_fc660m.c](keymap_fc660m.c) emulates original fc660m layers

    Fn + Esc = `
    Fn + {left, down, up, right}  = {home, pgdown, pgup, end}

#### 1.0 Default ANSI layer
    ,-----------------------------------------------------------.  ,----.
    |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |  | Ins|
    |-----------------------------------------------------------|  |----|
    |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|  | Del|
    |-----------------------------------------------------------|  `----'
    |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
    |--------------------------------------------------------------.
    |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift   |  Up|
    |-------------------------------------------------------------------.
    |Ctrl|Gui|Alt |      Space            |Alt |Ctrl|  Fn|Left|Down|Rght|
    `-------------------------------------------------------------------'
#### 1.1 Default Fn Layer
    ,-----------------------------------------------------------.  ,----.
    |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|       |  |    |
    |-----------------------------------------------------------|  |----|
    |     |   |   |   |   |   |   |   |Psc|Slk|Pau|   |   |     |  |    |
    |-----------------------------------------------------------|  `----'
    |      |   |   |   |   |   |   |   | Hm|PgU|   |   |        |
    |--------------------------------------------------------------.
    |        |   |   |   |   |   |   |   |End|PgD|   |        | PUp|
    |-------------------------------------------------------------------.
    |Ctrl|Gui|Alt |      Space            |Alt |Menu|  Fn|Home| PgD|End |
    `-------------------------------------------------------------------'
