# Scientific Programming - Practical 09

# Magic Square Checker

## Overview

This project contains a C implementation to verify whether a given matrix is a magic square. A **magic square** is a square matrix in which the sum of each row, each column, and both diagonals is the same.

The repository includes the following files:
- **`magic_square.h`**: Contains the logic for determining if a matrix is a magic square.
- **`main_stub.c`**: Implements the main program logic for reading a matrix from a file, checking if it is a magic square, and handling memory allocation.
- **`magic_square.txt`**: Example input file containing a magic square.
- **`not_magic_square.txt`**: Example input file containing a non-magic square.

---

## File Descriptions

### `magic_square.h`
This header file defines the function `isMagicSquare`:
- **`isMagicSquare(int **square, const int n)`**: Checks if a matrix is a magic square.
  - Inputs:
    - `square`: Pointer to the matrix.
    - `n`: Size of the matrix (number of rows or columns).
  - Returns:
    - `1` if the matrix is a magic square.
    - `0` otherwise.

### `main_stub.c`
This file implements the main program logic:
- Reads a matrix from a user-specified file.
- Uses dynamic memory allocation to store the matrix.
- Invokes the `isMagicSquare` function to verify the matrix.
- Frees allocated memory after execution.

### `magic_square.txt`
Contains a 3x3 matrix that is a magic square:
```
2 7 6
9 5 1
4 3 8
```

### `not_magic_square.txt`
Contains a 3x3 matrix that is not a magic square:
```
1 2 3
4 5 6
7 8 9
```

---

## How to Compile and Run

### Compilation

To compile the program, run the following command:
```bash
gcc -o main_stub main_stub.c
```

### Execution

Run the compiled program:
```bash
./main_stub
```

The program will prompt for the input file name. For example:
```plaintext
File name: magic_square.txt
No. lines, 3
The matrix is a magic square.
```

If you input `not_magic_square.txt`:
```plaintext
File name: not_magic_square.txt
No. lines, 3
The matrix is NOT a magic square.
```

---

## Features

- **Dynamic Memory Allocation**: Efficiently allocates memory for the matrix based on its size.
- **File Handling**: Reads matrix data from a file.
- **Error Handling**:
  - Ensures valid file input.
  - Validates memory allocation success.
  - Checks for incorrect matrix dimensions or data.
- **Magic Square Validation**: Checks rows, columns, and diagonals for equality.

---

