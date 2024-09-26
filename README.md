# Oil Adulteration Monitoring System

This project is an **Oil Adulteration Monitoring System** designed to detect oil adulteration, a prevalent issue where low-quality or harmful substances are added to oils, compromising their purity and nutritional value. The system utilizes multiple sensors and is a low-cost, mobile solution to identify these impurities in real time.

## Project Description

The **Oil Adulteration Monitoring System** leverages a combination of sensors to measure various physical properties of the oil. By using these sensors, it monitors parameters such as viscosity, temperature, and light absorption, all of which are indicators of potential adulteration. The system outputs results in real-time, offering a simple, yet effective method to ensure oil quality.

The key highlight of this project is the **handmade viscosity sensor**, specifically designed to detect changes in the oil's flow properties, which often signal adulteration.

## Hardware Components Used

- **Arduino Uno R3**: The microcontroller serving as the brain of the system.
- **Temperature Sensor**: Measures the oil’s temperature as changes in temperature can affect viscosity.
- **LDR (Light Dependent Resistor) Sensor**: Detects changes in oil transparency, which can indicate the presence of foreign substances.
- **Capacitive Sensor**: Measures changes in capacitance, useful for determining the purity of the oil.
- **Viscosity Sensor**: A handmade sensor that detects changes in the oil's viscosity, which is a critical indicator of adulteration.
- **Buzzer**: Alerts the user when adulteration is detected.
- **Keypad**: Allows the user to input parameters or commands.
- **LCD Display**: Displays real-time data from the sensors, providing feedback to the user.

## Arduino Codes Used

1. **Buzzer_Base_Code.ino**: Controls the activation of the buzzer based on sensor inputs.
2. **LDR_Sensor_Base_Code.ino**: Code that handles the light-dependent resistor, detecting changes in oil clarity.
3. **Oil_Adulteration_System.ino**: The main logic file that integrates all sensor data and controls the system's decision-making process.
4. **Temperature_Sensor_Base_Code.ino**: Reads temperature values from the temperature sensor and sends the data to the controller.
5. **Voltmeter_Base_Code.ino**: Manages the voltage readings for sensor calibration and system diagnostics.

## Project Architecture

The following diagram illustrates the overall architecture of the system:

![Project Architecture](![Uploading image.png…]()
)

*The image shows the various sensors interfacing with the Arduino microcontroller, which processes data and alerts the user via a buzzer and LCD display.*

## How It Works

1. The sensors collect data from the oil sample in real time.
2. The Arduino microcontroller processes this data to detect abnormalities that might indicate adulteration.
3. If adulteration is detected (based on predefined thresholds for viscosity, temperature, etc.), the buzzer is triggered, and the results are displayed on the LCD screen.
4. The system allows user interaction via the keypad, enabling parameter customization.

---

Feel free to replace the `./image.png` with the correct path to your project architecture image.
