# C Programs - Conditional Statements (Program 5 Series)

A set of 5 beginner-level C programs that practice `if / else if / else` conditions, logical operators, the modulus operator, character checks, and functions.

**Author:** Dhumal Jaydeep Machhindra
**Date:** 22/10/2026

---

## Programs

### 1. program5_1.c - Greatest of Three Numbers
Takes three integers and prints which one is the greatest.
- Handles the case where all three numbers are equal
- Handles the case where some numbers are equal

### 2. program5_2.c - Leap Year Checker
Takes a year as input and checks whether it is a leap year.
- Year of 0 or below is treated as invalid

### 3. program5_3.c - Grade Display
Takes marks as input and prints the grade.

| Marks      | Grade |
|------------|-------|
| 90 - 100   | A     |
| 75 - 89    | B     |
| 60 - 74    | C     |
| 40 - 59    | D     |
| Below 40   | Fail  |

- Negative marks are treated as invalid

### 4. program5_4.c - Divisible by 3 and 5 Checker
Takes an integer and checks whether it is divisible by both 3 and 5 using the modulus operator (`%`).
- Negative numbers are converted to positive before checking

### 5. program5_5.c - Character Type Checker
Takes a single character and tells whether it is an uppercase letter, lowercase letter, digit, or special symbol.

---

## How to Compile and Run

Use GCC (replace the file name as needed):

```bash
gcc program5_1.c -o program5_1
./program5_1
```

On Windows:

```bash
gcc program5_1.c -o program5_1.exe
program5_1.exe
```

---

## Concepts Used

- `if`, `else if`, `else` statements
- Relational operators (`<`, `>`, `<=`, `>=`, `==`)
- Logical operators (`&&`, `||`)
- Modulus operator (`%`)
- Character comparison using ASCII values
- Functions with parameters
- Input with `scanf` and output with `printf`
- Basic input validation