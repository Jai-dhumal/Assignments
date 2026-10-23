# C Programs - Conditional Statements (Program 4 Series)

A set of 5 beginner-level C programs that practice `if / else if / else` conditions, the modulus operator, input validation, and functions.

**Author:** Dhumal Jaydeep Machhindra
**Date:** 22/10/2026

---

## Programs

### 1. program4_1.c - Positive / Negative / Zero Checker
Takes an integer and tells whether it is positive, negative, or zero.

| Input     | Output                         |
|-----------|--------------------------------|
| Above 0   | Number is Positive             |
| Below 0   | Number is Negative             |
| Equal 0   | Zero                           |

### 2. program4_2.c - Even / Odd Checker
Takes an integer and checks whether it is even or odd using the modulus operator (`%`).
- Negative numbers are converted to positive before checking

### 3. program4_3.c - Find Greater Number
Takes two integers and prints which one is greater, or whether they are equal.

### 4. program4_4.c - Voting Eligibility Checker
Takes an age as input.
- Eligible if **age >= 18**
- Age of 0 or below is treated as invalid

### 5. program4_5.c - Divisible by 5 Checker
Takes an integer and checks whether it is divisible by 5.
- Negative numbers are converted to positive before checking

---

## How to Compile and Run

Use GCC (replace the file name as needed):

```bash
gcc program4_1.c -o program4_1
./program4_1
```

On Windows:

```bash
gcc program4_1.c -o program4_1.exe
program4_1.exe
```

---

## Concepts Used

- `if`, `else if`, `else` statements
- Relational operators (`<`, `>`, `>=`, `==`)
- Modulus operator (`%`)
- Functions with parameters
- Input with `scanf` and output with `printf`
- Basic input validation