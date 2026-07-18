I started with the circuit, wiring the ESP32 and OLED on the breadboard. At first nothing worked, and I kept pressing RESET like it would fix things. Later I realized I had mixed up the SDA/SCL pins. Fixing that gave me my first small win.

![image](https://cdn.hackclub.com/019ecbeb-b5a3-7e6d-bf45-cc182309b850/Screenshot%202026-06-15%20at%2020.52.07.png)

---
Writing the code was fun but also frustrating. Seeing “Desk Bot” appear felt amazing, even though I had silly mistakes like putting display.begin() inside loop().

![image](https://cdn.hackclub.com/019ecbeb-1593-7a1f-b51f-f5200cd1707c/image.png)

---
Simulating the project gave me a clearer picture of how it would behave before I risked frying anything.

![image](https://cdn.hackclub.com/019ecbec-71f9-7e39-a420-235ba0a8975f/image.png)
