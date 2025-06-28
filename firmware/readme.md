# sugarpad

My first macropad and first PCB designed. Made for the Hackclub's [Hackpad project](https://hackpad.hackclub.com/).

* Keyboard Maintainer: [Kristofer P](https://github.com/kristoferkp)
* Hardware Supported: RP2040 (Seeed studio XIAO RP2040)
* Hardware Availability: Nowhere ;)

QMK compile command:
´´´bash
qmk compile -kb sugarpad -km default
´´´

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the XIAO RP2040
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
