# sugarpad

A versatile macropad powered by the RP2040 (Seeed Studio Xiao RP2040)

*images*

The sugarpad is powered by QMK (with VIA support).
sugarpad is a 11-key macropad with a rotary encoder (with built in switch) and an OLED screen.

The sugarpad is part of Hackclub's [Hackpad project](https://hackpad.hackclub.com/)!

## Firmware
With VIA, you can easily switch out the keymap of the macropad and record macros.

By default the 1st layer is a numpad, the rotary encoder play/pauses music and changes volume.
The keys under the encoder switch layers.

There are a total of 4 layers. 2nd and 3rd layers are F0-F21 and the final layer is unmapped.

By default the OLED screen shows the layer you are on.

## PCB
The PCB was built with KiCad.
*images*

## Case
The case can be printed in 3 parts - the bottom, the plate and the top. 
The case uses 4 M3x16 screws and 4 M3x5x4mm heatset inserts.

*images*

Almost no supports are needed. 

## BOM
- 1x Seeed Studio Xiao RP2040
- 1x EC11E Rotary Encoder (switch built in)
- 1x rotary Encoder Knob (can also be printed)
- 1x 0.91" SSD1306 OLED screen
- 11x Cherry MX style switches
- 11x Blank DSA keycaps
- 12x DO-35 diodes (THT)

## Case
- 4x M3x16mm socket head bolts
- 4x M3x5x4mm heatset inserts
- 1x top_case.3mf
- 1x plate.3mf
- 1x bottom_case.3mf