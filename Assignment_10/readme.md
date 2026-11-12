# C Programs - Floating Point Data Types and Functions (Program 10 Series)

A set of 5 beginner-level C programs that practice `float` and `double` data types, functions with parameters and return values, arithmetic operations, and unit conversions.

**Author:** Dhumal Jaydeep Machhindra  
**Date:** 12/11/2026

---

## Programs

### 1. program10_1.c - Area of a Circle
Accepts the radius of a circle from the user and calculates its area.
- Uses the formula `PI * radius * radius`.
- Defines the value of PI (3.14) using a `#define` macro.
- Uses a function with a `float` parameter that returns a `float` result.

### 2. program10_2.c - Area of a Rectangle
Accepts the width and height of a rectangle from the user and calculates its area.
- Uses the formula `width * height`.
- Displays the result rounded to two decimal places.
- Uses a function with two `float` parameters that returns a `double` result.

### 3. program10_3.c - Kilometers to Meters
Accepts a distance in kilometers from the user and converts it into meters.
- Handles negative numbers by converting them into positive numbers.
- Uses the conversion rate of 1 kilometer = 1000 meters.
- Uses a function with an integer parameter that returns the converted value.

### 4. program10_4.c - Celsius to Fahrenheit
Accepts a temperature in Celsius from the user and converts it into Fahrenheit.
- Uses the formula `(C * 9) / 5 + 32`.
- Displays the result rounded to two decimal places.
- Uses a function with a `float` parameter that returns a `double` result.

### 5. program10_5.c - Square Feet to Square Meters
Accepts an area in square feet from the user and converts it into square meters.
- Uses the conversion factor 1 square foot = 0.0929 square meters.
- Displays the result rounded to two decimal places.
- Uses a function with a `float` parameter that returns a `double` result.

---

## How to Compile and Run

Use GCC (replace the file name as needed):

```bash
gcc program10_1.c -o program10_1
./program10_1
```

On Windows:

```bash
gcc program10_1.c -o program10_1.exe
program10_1.exe
```

---

## Concepts Used

- Floating point data types (`float`, `double`)
- Macro definition (`#define`)
- Arithmetic operators (`+`, `*`, `/`)
- Unit conversion formulas
- Format specifiers (`%d`, `%f`, `%lf`, `%.2lf`)
- Functions with parameters and return values
- Functions with multiple parameters
- Input using `scanf()` and output using `printf()`
- Handling negative numbers
- Basic problem-solving and logic building

---