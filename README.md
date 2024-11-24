# Scientific Programming - Practical 06

# Matrix Multiplication Program

## Overview

This C program performs matrix multiplication for two matrices, `A` and `B`, and stores the result in a matrix `C`. The dimensions of the matrices are predefined as:

- Matrix `A`: \( n \times p \)
- Matrix `B`: \( p \times q \)
- Matrix `C`: \( n \times q \)

### Matrix Dimensions

- **Matrix A:** 5 rows (\( n = 5 \)) and 3 columns (\( p = 3 \)).
- **Matrix B:** 3 rows (\( p = 3 \)) and 4 columns (\( q = 4 \)).
- **Matrix C:** 5 rows (\( n = 5 \)) and 4 columns (\( q = 4 \)).

### Program Highlights

- Initializes matrices `A` and `B` with predefined values.
- Implements a matrix multiplication function `matmult()`.
- Outputs the matrices `A`, `B`, and the resulting matrix `C` after multiplication.

---

## How to Compile and Run

### Compilation

Use the following command to compile the program:

```bash
gcc -o Matrix Matrix.c
```

### Execution

Run the compiled program:

```bash
./Matrix
```

---

## Program Output

The program outputs:

1. **Matrix A**: Displays the contents of matrix `A`.
2. **Matrix B**: Displays the contents of matrix `B`.
3. **Matrix C (A * B)**: Displays the result of the matrix multiplication.

### Example Output

```plaintext
Matrix A:
  0.0   1.0   2.0 
  1.0   2.0   3.0 
  2.0   3.0   4.0 
  3.0   4.0   5.0 
  4.0   5.0   6.0 

Matrix B:
  0.0  -1.0  -2.0  -3.0 
  1.0   0.0  -1.0  -2.0 
  2.0   1.0   0.0  -1.0 

Matrix Multiplation of (A * B):
  5.0   1.0  -3.0  -7.0 
  8.0   4.0   0.0  -4.0 
 11.0   7.0   3.0  -1.0 
 14.0  10.0   6.0   2.0 
 17.0  13.0   9.0   5.0 
```

---

## Function Details

### `matmult(double a[n][p], double b[p][q], double c[n][q])`

- Initializes the elements of matrix `C` to zero.
- Performs matrix multiplication using the standard formula:

\[C[i][j] = \sum_{k=0}^{p-1} A[i][k] \times B[k][j]
\]

### Matrix Initialization

- **Matrix A**: Values are initialized as \( A[i][j] = i + j \).
- **Matrix B**: Values are initialized as \( B[i][j] = i - j \).

---
