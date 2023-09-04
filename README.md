# Hand Held Armor Plate

This repo is to create a hand held armor plate firmware for testing the auto aiming function easily.

- **Development Board**: STM32F103C8T6 minimum system board.
- **Tool Chain**
  - STM32CubeIDE v1.8.0
  - ST-Link Debugger
- **Author**: Haoran



## Firmware

**LED Settings**

* LED1: PWM, use TIM2, CH3(R),CH2(G), CH1(B), 1kHz freq
* LED1: PWM, use TIM4, CH1(R),CH2(G), CH3(B), 1kHz freq

**SWITCH**

* Pin: PB10, input mode

​	