# Project A.L.I.E.N. WS2812B Test Code

<!-- Harry Boyd - 13/08/2024 - github.com/hboyd255 -->

This repository contains code that allows me to test the WS2812B LED strip used
on the Project A.L.I.E.N. robot.

The datasheet for the WS2812B LEDs can be found
[here](https://cdn-shop.adafruit.com/datasheets/WS2812B.pdf).

## Acknowledgments

This code uses the NeoPixelBus library by Makuna. The library can be found on
[GitHub](https://github.com/Makuna/NeoPixelBus).

## Notes

So after the first test, it seems that the LEDs work with 5V Power and 3.3V
Data.

The datasheet says that VIH should be a minimum of 0.7 \* VDD, which is 3.5V for
a 5V supply. Meaning that a 3.3V signal is _technically_ out of spec.

To fix this I'll implement a level shifter to shift the 3.3V signal to 5V.

Im going to implement a variation of the level shifter described in
[this article](https://thecustomizewindows.com/2019/08/simple-level-shifter-with-transistors-3-3v-5v/).
However, instead of using 2 1k resistors and 2 10k, I will be using 4 1k
resistors. This is because using 10k resistors was too slow for the WS2812B
LEDs. Below I have show the waveforms of both 10k and 1k resistors.

### 10k Resistors

![Waveform from using 10k Resistors](/photos/WaveformFor10K.jpg)

### 1k Resistors

![Waveform from using 1k Resistors](/photos/WaveformFor1K.jpg)

For reference, the siganl shown is the number 72 (0b01001000). The way the
WS2812Bs communicate is by sending 40% pulses to represent a 0 and 60% pulses to
represent a 1.

## Schematic

Here is the schematic for the level shifter.

![Schematic](/photos/Schematic.jpg)

## Breadboard Layout

This is the way that I set the hardware up on a breadboard.

![Breadboard Layout](/photos/Breadboard.jpg)

Those are 2 2N3904 NPN transistors and 4 1k resistors.

The 3 channel wires at the bottom are connected to the LED strip. The red wire
is +, the orange is -, and the yellow is D.
