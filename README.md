# Scientific Programming - Practical 05

# Fibonacci Series and Logarithmic Approximation Programs

## Overview

This repository contains two C programs:

1. **Fibonacci Series Generator**: Calculates the Fibonacci sequence up to a user-defined number of terms.
2. **Logarithmic Approximation and Maclaurin Series Comparison**: Approximates logarithmic values using the Maclaurin series and compares them with the logarithmic function.

---

## Program 1: Fibonacci Series Generator (Fibonacci.c)

### Description

This program calculates the Fibonacci sequence for a user-defined number of terms using pointers and a custom function.

### Features

- Prompts the user to input an integer `n`.
- Prints the Fibonacci sequence up to the `n`th term.
- Utilizes a function to calculate the next term using pointers.

### How to Compile and Run

#### Compilation

```bash
gcc -o Fibonacci Fibonacci.c
```

#### Execution

```bash
./Fibonacci
```

### Expected Output

1. For an input of `n = 5`, the output will be:

```plaintext
Enter the integer value: 5
Fibonacci series is 0 1 1 2 3 5
```

---

## Program 2: Logarithmic Approximation and Comparison (Hyperbolic.c)

### Description

This program approximates logarithmic values using the **Maclaurin series** and compares them with the standard logarithmic function over a range of values.

### Features

- User inputs a positive precision value `epsilon`.
- The program computes logarithmic approximations using the **Maclaurin series**.
- Results are compared with the standard logarithmic values.
- Outputs whether the values match within a defined precision.

### Functions

1. **`mac_approx(x, eps)`**: Approximates the logarithmic value using the Maclaurin series.
2. **`log_approx(x)`**: Calculates the logarithmic value using the standard log function.
3. **`compare_vals(p, q)`**: Compares two values within a defined precision.

### How to Compile and Run

#### Compilation

```bash
gcc -o Hyperbolic Hyperbolic.c -lm
```

#### Execution

```bash
./Hyperbolic
```

### Expected Output

1. For an input of `epsilon = 0.0001`, the program will process 180 values from -0.9 to 0.9.
2. Each comparison will print either "Match" or "No Match".

Example:

```plaintext
Enter a positive precision value: 0.0001
Match
Match
No Match
...
```

---

