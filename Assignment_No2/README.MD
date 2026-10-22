# C Practice Programs – Set 2

A collection of five beginner-level C programs covering loops, conditions, functions, and user input.

**Author:** Dhumal Jaydeep Machhindra
**Date:** 18/10/2026

---

## Project Structure

```
.
├── program2_1.c    # Print stars (while loop, counter variable)
├── program2_2.c    # Print stars (while loop, decrementing input)
├── program2_3.c    # Conditional "Hello" check
├── program2_4.c    # Print a number N times
├── program2_5.c    # Even / Odd checker (BOOL typedef)
├── myexe.exe       # Pre-built Windows executable
└── README.md
```

---

## Programs

| File | Function | Description | Concepts |
|------|----------|-------------|----------|
| `program2_1.c` | `Display(int)` | Prints `*` as many times as the absolute value of the input. Uses a separate counter. | `while`, absolute value, `scanf` |
| `program2_2.c` | `Display(int)` | Same output as program 1, but decrements the input itself instead of using a counter. | `while`, absolute value |
| `program2_3.c` | `Display(int)` | Prints `Hello` if the number is less than 10, otherwise `Invalid Input`. | `if / else` |
| `program2_4.c` | `Display(int, int)` | Takes a number and a frequency, and prints the number repeatedly. | `for` loop, multiple parameters |
| `program2_5.c` | `CheckEven(int)` | Returns `TRUE` if the number is even, else `FALSE`; `main` prints the result. | `typedef`, `#define`, modulus `%`, return values |

---

## Build & Run

Requires a C compiler such as **GCC**.

```bash
# Compile
gcc program2_1.c -o program2_1

# Run (Linux / macOS)
./program2_1

# Run (Windows)
program2_1.exe
```

Repeat for `program2_2` … `program2_5`.

`myexe.exe` is a pre-built Windows executable and can be run directly:

```
myexe.exe
```

---

## Sample Runs

**program2_1 / program2_2**
```
Enter the Number:
5
 *  *  *  *  * 
```
Negative input behaves the same (`-5` prints 5 stars).

**program2_3**
```
Enter Number:
4
Hello
```
```
Enter Number:
25
Invalid Input
```

**program2_4**
```
Enter First Number:
7
Enter Second Number:
4
7
7
7
```
*(see Known Issues below)*

**program2_5**
```
Enter Number:
8
The Number is Even
```

---

## Known Issues / Notes

- **`program2_4.c`**
  - The loop runs from `1` to `iFrequency - 1`, so the number is printed `iFrequency - 1` times, not `iFrequency` times as the header comment states. Fix: use `iCnt <= iFrequency` (or start from `0` with `<`).
  - `Display` is declared as returning `int` but has no `return` statement. Change the return type to `void`.
- **`program2_3.c`** – Header typo: "Condiition". Negative numbers also satisfy `iNo < 10` and print `Hello`.
- **All programs** – The return value of `scanf` is not checked, so non-numeric input leaves the variable at its default value `0`.
- **`program2_1.c` / `program2_2.c`** – Output does not end with a newline.

---

## License

For educational / practice use.