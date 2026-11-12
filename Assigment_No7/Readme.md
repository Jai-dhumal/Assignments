# C Programs - Iterative Statements (Program 7 Series)

A set of 5 beginner-level C programs that practice iterative statements using `for` loops, conditional statements, the modulus operator, arithmetic operations, and functions.

**Author:** Dhumal Jaydeep Machhindra  
**Date:** 06/11/2026

---

## Programs

### 1. program7_1.c - Pattern Printing
Accepts an integer from the user and prints the pattern `$  *` the specified number of times.
- Handles negative numbers by converting them into positive numbers.
- Uses a `for` loop to repeat the pattern.
- Uses a function with an integer parameter.

### 2. program7_2.c - Display Numbers from 1 to N
Accepts an integer from the user and displays all numbers from 1 to the specified number.
- Uses a `for` loop to display numbers in ascending order.
- Uses a function with an integer parameter.

### 3. program7_3.c - Display Number Line
Accepts an integer from the user and displays numbers from `-N` to `+N`.
- Uses a `for` loop to display negative numbers, zero, and positive numbers.
- Displays numbers in ascending order.

### 4. program7_4.c - Display Odd Numbers
Accepts an integer from the user and displays all odd numbers from 1 to the specified number.
- Uses the modulus operator (`%`) to identify odd numbers.
- Uses an `if` condition inside a `for` loop.
- Uses a function with an integer parameter.

### 5. program7_5.c - Display First Five Multiples
Accepts an integer from the user and displays its first five multiples.
- Handles negative numbers by converting them into positive numbers.
- Uses multiplication to generate the first five multiples.
- Uses a `for` loop to execute exactly five iterations.

---

## How to Compile and Run

Use GCC (replace the file name as needed):

```bash
gcc program7_1.c -o program7_1
./program7_1
```

On Windows:

```bash
gcc program7_1.c -o program7_1.exe
program7_1.exe
```

---

## Concepts Used

- Iterative statements (`for` loop)
- Conditional statements (`if`)
- Relational operators (`<`, `<=`)
- Arithmetic operators (`+`, `-`, `*`)
- Modulus operator (`%`)
- Increment operator (`++`)
- Number manipulation and pattern printing
- Functions with integer parameters
- Input using `scanf()` and output using `printf()`
- Handling negative numbers
- Basic problem-solving and loop control logic

---