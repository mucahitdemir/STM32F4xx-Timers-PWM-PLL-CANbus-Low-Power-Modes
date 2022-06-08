# STM32F4xx-Timers-PWM-PLL-CANbus-Low-Power-Modes
This repository covers a famous online course on Udemy mentioned above. I learned different peripherals with code exercices related with PWM, CAN, and Low-power Mode MCUs.
### Phase-locked loop
A phase-locked loop or phase lock loop (PLL) is a control system that generates an output signal whose phase is related to the phase of an input signal. 
There are several different types; the simplest is an electronic circuit consisting of a variable frequency oscillator and a phase detector in a feedback loop. 
The oscillator generates a periodic signal, and the phase detector compares the phase of that signal with the phase of the input periodic signal, 
adjusting the oscillator to keep the phases matched. (Source:Wikipedia)

### Timers
The timer is an important application in Embedded systems, it maintains the timing of an operation in sync with a system clock or an external clock. 
The timer has so many applications such as measure time generating delays, they can also be used for generating baud rates.

### Pulse-Width Modulation (PWM)
**Pulse width modulation (PWM)** is a powerful technique for controlling analog circuits with a microprocessor's digital outputs. 
PWM is employed in a wide variety of applications, ranging from measurement and communications to power control and conversion.

### CANBus Guide Book
This website provides a well-structed documents for CAN Bus Protocol. Link: https://www.csselectronics.com/
- https://drive.google.com/file/d/1FSoYc1c3nJ54NlAVaCuEaQ4uoTC5Soao/view?usp=sharing

I use CAN-SPI Transceiver module (MCP2515 Stand-Alone CAN Controller with SPI Interface)
Kvaser **CANtegrity**
Kvaser CANtegrity is signal integrity hardware that has been integrated in Kvaser’s CAN FD controller logic. The hardware adds high-speed sampling (640MHz) which provides more detailed data on each CAN frame.

This allows Kvaser CANtegrity to combine a) oscilloscope-level display of the bus signal, with b) exact interpretation of the CAN frame. 

With this data it is possible to process the information and find deviations from the perfect CAN-frame, including phase shift of edges and unexpected edges. 

CANtegrity hardware provides deep knowledge of the CAN-frames under analysis, and through that, a complete understanding of the CAN system can be achieved. An advantage over a traditional oscilloscope is being able to trigger on specific error frames or ACK bits, rather than just analog characteristics, such as level or pulse width.



