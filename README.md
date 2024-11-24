# Scientific Programming - Practical 08

# GCD Calculation Programs

## Overview

This repository contains two C programs for calculating the **Greatest Common Divisor (GCD)** of two integers:

1. **`gcd.c`**: Computes the GCD using an iterative approach.
2. **`recursive.c`**: Computes the GCD using a recursive approach.

---

## Program 1: Iterative GCD (`gcd.c`)

### Description

This program calculates the GCD of two integers using an iterative algorithm. The approach uses the Euclidean algorithm, which repeatedly replaces the larger number with the remainder until the remainder becomes zero.

### Features

- Implements an iterative GCD calculation.
- Prompts the user to input two positive integers.
- Validates that both inputs are positive.

### How to Compile and Run

#### Compilation

```bash
gcc -o gcd gcd.c
```

#### Execution

Run the compiled program:

```bash
./gcd
```

### Expected Output

1. The program prompts the user to input two integers.
2. It computes and displays the GCD of the two integers.

Example output:

```plaintext
Enter two integers: 56 98
Iterative GCD of 56 and 98 is 14
```

If the input contains non-positive integers:

```plaintext
Enter two integers: -4 8
Enter positive number only
```

---

## Program 2: Recursive GCD (`recursive.c`)

### Description

This program calculates the GCD of two integers using a recursive implementation of the Euclidean algorithm.

### Features

- Implements a recursive GCD calculation.
- Prompts the user to input two positive integers.
- Validates that both inputs are positive.

### How to Compile and Run

#### Compilation

```bash
gcc -o recursive recursive.c
```

#### Execution

Run the compiled program:

```bash
./recursive
```

### Expected Output

1. The program prompts the user to input two integers.
2. It computes and displays the GCD of the two integers.

Example output:

```plaintext
Enter two integers: 56 98
Recursive GCD of 56 and 98 is 14
```

If the input contains non-positive integers:

```plaintext
Enter two integers: 0 15
Enter positive number only
```

---

