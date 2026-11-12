# C Programs - Conditional Statements and Iterative Statements (Program 8 Series)

A set of 5 beginner-level C programs that practice conditional statements (`if`, `else if`, `else`, `switch`), iterative statements using `for` loops, arithmetic operations, and functions.

**Author:** Dhumal Jaydeep Machhindra  
**Date:** 12/11/2026

---

## Programs

### 1. program8_1.c - Number Range Classification
Accepts an integer from the user and classifies it as small, medium, or greater.
- Handles negative numbers by converting them into positive numbers.
- Prints "Small" for numbers from 0 to 50.
- Prints "Medium Range" for numbers from 51 to 100.
- Prints "Greater" for numbers above 100.
- Uses `if`, `else if`, and `else` statements.
- Uses a function with an integer parameter.

### 2. program8_2.c - Display Digit in Words
Accepts a single-digit number from the user and displays it in words.
- Uses a `switch` statement to match digits from 0 to 9 (e.g. `5` → `Five`).
- Displays an error message if the number is not a single digit.
- Uses a function with an integer parameter.

### 3. program8_3.c - Factorial of a Number
Accepts an integer from the user and displays its factorial.
- Handles negative numbers by converting them into positive numbers.
- Uses a `for` loop that counts down from the number to 1.
- Multiplies each value into a running product.
- Uses a function with an integer parameter.

### 4. program8_4.c - Multiplication Table
Accepts an integer from the user and displays its multiplication table.
- Uses a `for` loop to generate the first ten multiples (1 to 10).
- Displays the results in ascending order, separated by tabs.
- Uses a function with an integer parameter.

### 5. program8_5.c - Reverse Multiplication Table
Accepts an integer from the user and displays its multiplication table in reverse order.
- Uses a `for` loop that counts down from 10 to 1.
- Displays each result on a new line.
- Uses a function with an integer parameter.

---

## How to Compile and Run

Use GCC (replace the file name as needed):

```bash
gcc program8_1.c -o program8_1
./program8_1
```

On Windows:

```bash
gcc program8_1.c -o program8_1.exe
program8_1.exe
```

---

## Concepts Used

- Conditional statements (`if`, `else if`, `else`)
- Switch-case statement (`switch`, `case`, `break`, `default`)
- Iterative statements (`for` loop)
- Relational operators (`<`, `<=`, `>`, `>=`)
- Logical operator (`&&`)
- Arithmetic operators (`-`, `*`)
- Increment and decrement operators (`++`, `--`)
- Number manipulation and factorial calculation
- Functions with integer parameters
- Input using `scanf()` and output using `printf()`
- Handling negative numbers
- Basic problem-solving and loop control logic

---