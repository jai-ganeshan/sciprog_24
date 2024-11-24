# Scientific Programming - Practical 03

# Numerical Integration using Trapezoidal Rule

## Overview

This C program calculates the integral of the function `tan(x)` over the interval [0, π/3] using the **Trapezoidal Rule**. The result is compared with the natural logarithm of 2 (`log(2)`), and the difference between the two values is computed.

## Program Details

### Key Features

- Implements numerical integration using the **Trapezoidal Rule**.
- Computes 12 equidistant points in the interval [0, π/3].
- Adds the first and last terms of the function and the weighted sum of intermediate points.
- Compares the result of the integration with `log(2)` and calculates the difference.

### Mathematical Background

The integral of `tan(x)` from 0 to π/3 is mathematically equivalent to `log(2)`:

\[\int_{0}^{\pi/3} 	an(x) \, dx = \ln(2)
\]

This program numerically approximates the integral and evaluates the accuracy by comparing it to the analytical result.

### Code Description

1. The interval `[a, b]` is defined where `a = 0` and `b = π/3`.
2. The interval is divided into `N = 12` subintervals of equal width.
3. The Trapezoidal Rule is applied:
   \[   	ext{Integral} = rac{b - a}{2N} \left[ f(a) + 2 \sum_{i=1}^{N-1} f(x_i) + f(b) 
ight]
   \]
4. The program calculates the difference between the numerical result and `log(2)`.

## How to Compile and Run

### Prerequisites

Ensure you have the following installed:

- GCC (or any other C compiler)

### Compilation

To compile the program, run the following command in your terminal:

```bash
gcc -o Week-3 Week-3.c -lm
```

### Execution

Run the compiled program:

```bash
./Week-3
```

### Expected Output

The program outputs:

1. The calculated integral of `tan(x)` over [0, π/3].
2. The value of `log(2)`.
3. The difference between the calculated integral and `log(2)`.

Sample output:

```plaintext
Integral of tan(x) = 0.69314718
Result of log(2) = 0.69314718
Difference = 0.00000000
```
