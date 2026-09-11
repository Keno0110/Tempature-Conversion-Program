# Temperature Converter Calculator 🌡️

**Procedural CLI Tool • Built-in Logic • Input Handling**

*Learning how data control flow and numerical precise conversions work from the ground up.*

## 🧠 About The Project

I built this **Temperature Converter Calculator** to practice procedural logic execution, character variable handling, and floating-point math formulas in C. It's a terminal application that handles bidirectional thermal conversions between **Celsius** and **Fahrenheit**.

I learn by writing programs that require interacting with terminal input streams and ensuring math formulas execute correctly under strict data types.

**Have a conversion requirement → select operation → input numeric value → output precise floating-point response.**

## 💻 Language & Tools

**C** • **Linux Terminal** • **VS Code**

## ⚙ How It Works

The application provides an interactive interface utilizing character comparisons to switch execution branches:

1. **Celsius to Fahrenheit (`choice == 'C'`)**: Takes Celsius input and processes it through the formula `(celsius * 9.0f / 5.0f) + 32.0f`.
2. **Fahrenheit to Celsius (`choice == 'F'`)**: Takes Fahrenheit input and processes it through the formula `(fahrenheit - 32.0f) * 5.0f / 9.0f`.

## 🚀 Execution Example

```text
Temperature Conversion Program
C. Celsius to Fahrenheit
F. Fahrenheit to Celsius
Is the temperature in Celsius or Fahrenheit? (C/F): F
Enter the temperature in Fahrenheit: 100
The temperature in Celsius is: 37.778
```

## 🔨 Compilation Instructions

Compile and run the binary using your standard environment toolchain:

```bash
# Compile the main source file
gcc main.c -o temperature_converter

# Execute the application
./temperature_converter
```

## 📈 The Journey (What I'm Learning Next)

- [ ] Add an `else` branch error handler to catch invalid character inputs gracefully.
- [ ] Use loop control blocks to allow running multiple conversions without resetting the console binary.
- [ ] Integrate character parsing helper methods to automatically handle both upper and lowercase menu triggers (`C` or `c`).

**Just getting started.** 🚀
