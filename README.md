# Scientific Programming - Practical 07

# Array and Estimate Programs

## Overview

This repository contains two C programs:

1. **`array_functions.c`**: Demonstrates dynamic memory allocation and array manipulation.
2. **`estimate.c`**: Estimates the value of the mathematical constant \( e \) using the Taylor series expansion.

---

## Program 1: Array Functions

### Description

This program dynamically allocates memory for an array, fills the array with ones, prints the array's contents, and releases the memory.

### Features

- Dynamically allocates memory for an array using `malloc`.
- Populates the array with ones using a custom function.
- Prints the array's contents.
- Releases the allocated memory using `free`.

### How to Compile and Run

#### Compilation

```bash
gcc -o array_functions array_functions.c
```

#### Execution

Run the compiled program:

```bash
./array_functions
```

### Expected Output

1. The program prompts the user to enter the size of the array.
2. It allocates memory, fills the array with ones, and prints the array.

Example output:

```plaintext
Enter array size: 5
1 1 1 1 1
```

---

## Program 2: Estimate \( e \) Using Taylor Series

### Description

This program calculates an approximation of \( e \) (Euler's number) using the Taylor series expansion up to a user-defined order.

The Taylor series expansion for \( e \) is:

\[e = \sum_{n=0}^{\infty} \frac{1}{n!}
\]

### Features

- Computes factorial values using a custom function.
- Dynamically allocates memory for Taylor series terms.
- Approximates \( e \) by summing the series terms up to the given order.

### How to Compile and Run

#### Compilation

```bash
gcc -o estimate estimate.c
```

#### Execution

Run the compiled program:

```bash
./estimate
```

### Expected Output

1. The program prompts the user to enter the order of the Taylor series.
2. It computes and displays the approximate value of \( e \).

Example output:

```plaintext
Enter the order for estimate e: 10
Approximate value of e using order 10: 2.718282
```

---
