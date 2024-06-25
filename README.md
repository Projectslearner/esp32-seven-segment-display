# ESP32 Seven Segment Display using 74HC595 Project

### Project Overview
The ESP32 Seven Segment Display project demonstrates how to control a seven-segment display using the 74HC595 shift register with an ESP32 microcontroller. Seven-segment displays are commonly used for numerical output in digital clocks, timers, counters, and other display applications.

### Components Needed
- **ESP32 Microcontroller**: Controls the display and sends data to the shift register.
- **74HC595 Shift Register**: Manages the data sent to the seven-segment display segments.
- **Seven Segment Display (Common Cathode)**: Displays digits 0-9 using segment patterns.
- **Jumper Wires**: Connect components on a breadboard.

### Block Diagram

### Circuit Setup
1. **Connecting Components:**
   - **Latch Pin (latchPin)**: Connect to GPIO 23 on ESP32.
   - **Clock Pin (clockPin)**: Connect to GPIO 18 on ESP32.
   - **Data Pin (dataPin)**: Connect to GPIO 5 on ESP32.
   - **Seven Segment Display**: Connect the output pins of 74HC595 to the corresponding segments (A-G) of the display.

### Instructions
1. **Setup:**
   - Initialize SPI communication using `SPI.begin()` and configure SPI settings with `SPI.beginTransaction()`.
   - Set latch, clock, and data pins as output using `pinMode()`.

2. **Operation:**
   - **Displaying Digits:**
     - Use the `displayDigit()` function to sequentially display digits 0-9 on the seven-segment display.
     - The `digitPatterns[]` array stores the segment patterns for digits 0-9 (common cathode configuration).

3. **Considerations:**
   - **Segment Mapping:** Ensure correct mapping between the shift register outputs and seven-segment display segments.
   - **Timing:** Adjust delays (`delay()`) based on display refresh rate and visual requirements.

### Applications
- **Digital Clocks:** Display time using hours and minutes.
- **Counters and Timers:** Visualize counts and elapsed time.
- **Measurement Devices:** Show numerical data such as temperature, distance, etc.

### Useful Links
🌐 [ProjectsLearner - ESP32 Seven Segment Display](https://projectslearner.com/learn/esp32-seven-segment-display)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner
