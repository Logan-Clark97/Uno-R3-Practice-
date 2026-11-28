# Project 02 - Traffic Light Simulator

## Objective

Simulate a traffic light using three LEDs controlled independently by an
ELEGOO UNO R3.

## Components Used

- ELEGOO UNO R3
- Breadboard
- 1 red LED
- 1 yellow LED
- 1 green LED
- 3 × 330 Ω resistors
- 7 jumper wires

## Circuit Assembly

### Step 1 - Establish a Common Ground

Connect a male-to-male jumper wire from the UNO R3 GND pin to the
negative rail of the breadboard. This establishes a common ground for
all three LEDs.

### Step 2 - Connect the Red LED

- Insert the anode into E7 and the cathode into E9.
- Insert a 330 Ω resistor between C7 and C3.
- Connect digital pin 10 to A3 using a jumper wire.
- Connect D9 to the negative rail using a jumper wire.

### Step 3 - Connect the Yellow LED

- Insert the anode into E16 and the cathode into E18.
- Insert a 330 Ω resistor between C16 and C12.
- Connect digital pin 9 to A12 using a jumper wire.
- Connect D18 to the negative rail using a jumper wire.

### Step 4 - Connect the Green LED

- Insert the anode into E25 and the cathode into E27.
- Insert a 330 Ω resistor between C25 and C21.
- Connect digital pin 8 to A21 using a jumper wire.
- Connect D27 to the negative rail using a jumper wire.

## Digital Pin Assignments

| LED    | Initial pin | Revised pin |
|--------|-------------|-------------|
| Red    | 10          | 13          |
| Yellow | 9           | 12          |
| Green  | 8           | 11          |

The circuit assembly above describes the original wiring. During
troubleshooting, the three signal wires were moved to the revised pins
to match the source code.

## Circuit Path

Using the revised pin assignments:

- Red: Pin 13 → 330 Ω resistor → red LED → negative rail → GND
- Yellow: Pin 12 → 330 Ω resistor → yellow LED → negative rail → GND
- Green: Pin 11 → 330 Ω resistor → green LED → negative rail → GND

All three LEDs share a common ground, but each has its own resistor and
digital output pin.

## Bugs and Troubleshooting

### Bug 1 - No LEDs Illuminated

I initially connected the LEDs to digital pins 10, 9, and 8. I realized
that the source code assigned the LEDs to different pins. I moved the
jumper wires to pins 13, 12, and 11 to match the code.

### Bug 2 - Only the Red LED Blinked

After changing the pin assignments, only the red LED blinked. I realized
that I had neglected to select the correct board in the Arduino IDE. I
identified Arduino Uno as the appropriate board setting for the ELEGOO
UNO R3.

## Concepts Learned

- Establishing a common ground for multiple components.
- Controlling multiple LEDs using independent digital output pins.
- Using individual resistors to limit current through each LED.
- Matching physical wiring to software pin assignments.
- Checking board selection in the Arduino IDE when troubleshooting.

## Source Code

[02_Traffic_Light.ino](02_Traffic_Light.ino)

## Expected Result

The red LED illuminates for five seconds, followed by the green LED for
five seconds and the yellow LED for two seconds. The sequence repeats
continuously.
