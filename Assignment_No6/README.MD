# C Programs - Conditional Statements (Program 6 Series)

A set of 5 beginner-level C programs that practice `if / else if / else` conditions, input validation, and functions.

**Author:** Dhumal Jaydeep Machhindra
**Date:** 22/10/2026

---

## Programs

### 1. program6_1.c - Electricity Bill Calculator
Takes the number of electricity units and calculates the bill.

| Units Consumed | Rate per Unit |
|----------------|---------------|
| 0 - 100        | Rs. 5         |
| 101 - 200      | Rs. 7         |
| Above 200      | Rs. 10        |

### 2. program6_2.c - Admission Eligibility Checker
Takes marks and age as input.
- Eligible if **marks >= 60** and **age >= 17**
- Marks and age outside 0-100 are treated as invalid input

### 3. program6_3.c - Discount Calculator
Takes the purchase amount and prints the payable amount.

| Purchase Amount | Discount |
|-----------------|----------|
| Below 1000      | 0%       |
| 1000 - 4999     | 10%      |
| 5000 and above  | 20%      |

### 4. program6_4.c - Valid Triangle Checker
Takes three side lengths and checks if they form a valid triangle.
- All sides must be greater than 0
- Sum of any two sides must be greater than the third side

### 5. program6_5.c - Bonus Calculator
Takes salary and years of service and calculates the bonus.

| Years of Service | Bonus      |
|------------------|------------|
| Less than 5      | 5% of salary  |
| 5 to 9           | 10% of salary |
| 10 or more       | 15% of salary |

---

## How to Compile and Run

Use GCC (replace the file name as needed):

```bash
gcc program6_1.c -o program6_1
./program6_1
```

On Windows:

```bash
gcc program6_1.c -o program6_1.exe
program6_1.exe
```

---

## Concepts Used

- `if`, `else if`, `else` statements
- Logical operators (`&&`, `||`)
- Functions with parameters
- Input with `scanf` and output with `printf`
- Basic input validation