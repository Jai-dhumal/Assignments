# C Programs - Functions with Return Values and Iterative Statements (Program 9 Series)

A set of 5 beginner-level C programs that practice functions that return values, iterative statements using `for` loops, conditional statements, the modulus operator, and arithmetic operations.

**Author:** Dhumal Jaydeep Machhindra  
**Date:** 12/11/2026

---

## Programs

### 1. program9_1.c - Display Stars and Hashes
Accepts an integer from the user and prints that many stars (`*`) followed by the same number of hashes (`#`).
- Uses two separate `for` loops, one for stars and one for hashes.
- Separates the symbols with tabs.
- Uses a function with an integer parameter.

### 2. program9_2.c - Dollar to Rupee Conversion
Accepts a dollar amount from the user and converts it into Indian rupees.
- Handles negative numbers by converting them into positive numbers.
- Uses a fixed conversion rate of 1 dollar = 70 rupees.
- Uses a function with an integer parameter that returns the converted amount.

### 3. program9_3.c - Even Factorial
Accepts an integer from the user and returns the product of all even numbers from 1 to that number.
- Handles negative numbers by converting them into positive numbers.
- Uses the modulus operator (`%`) to identify even numbers.
- Uses an `if` condition inside a `for` loop.
- Uses a function that returns the product.

### 4. program9_4.c - Odd Factorial
Accepts an integer from the user and returns the product of all odd numbers from 1 to that number.
- Handles negative numbers by converting them into positive numbers.
- Uses the modulus operator (`%`) to identify odd numbers.
- Uses an `if` condition inside a `for` loop.
- Uses a function that returns the product.

### 5. program9_5.c - Difference of Even and Odd Factorial
Accepts an integer from the user and returns the difference between the product of even numbers and the product of odd numbers up to that number.
- Handles negative numbers by converting them into positive numbers.
- Uses `if` and `else` inside a single `for` loop to separate even and odd numbers.
- Maintains two running products and subtracts the odd product from the even product.
- Uses a function that returns the difference.

---

## How to Compile and Run

Use GCC (replace the file name as needed):

```bash
gcc program9_1.c -o program9_1
./program9_1
```

On Windows:

```bash
gcc program9_1.c -o program9_1.exe
program9_1.exe
```

---

## Concepts Used

- Iterative statements (`for` loop)
- Conditional statements (`if`, `else`)
- Relational operators (`<`, `<=`, `==`, `!=`)
- Arithmetic operators (`-`, `*`)
- Modulus operator (`%`)
- Increment operator (`++`)
- Functions with integer parameters
- Functions with return values
- Input using `scanf()` and output using `printf()`
- Handling negative numbers
- Basic problem-solving and loop control logic

---