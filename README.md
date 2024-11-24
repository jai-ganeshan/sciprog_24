# Scientific Programming - Practical 02

1. **Conversion.c**: A program to convert an integer to its binary representation.
2. **Sum.c**: A program to compute the sum of two integers.

## Contents

- `Conversion.c`: Converts an integer to its binary equivalent.
- `Sum.c`: Calculates the sum of two integers provided by the user.

### Cloning the Repository

Clone the repository to your local machine:

```
git clone https://github.com/jai-ganeshan/sciprog_24.git
```

Navigate to the directory containing the programs:

```
cd sciprog_24/practical02/practical02
```

## Program Details

### 1. Conversion.c

**Description:**  
This program converts an integer to its binary representation. It takes an integer as input and outputs the binary equivalent.

**Compilation:**

```
gcc -o Conversion Conversion.c -lm
```

**Execution:**

```
./Conversion
```

**Expected Behavior:**  
- The program prompts the user to input an integer.
- Outputs the binary equivalent of the entered number.

### 2. Sum.c

**Description:**  
This program calculates the sum of two integers provided by the user.

**Compilation:**

```
gcc -o Sum Sum.c -lm
```

**Execution:**

```
./Sum
```

**Expected Behavior:**  
- The program prompts the user to input two integers.
- Outputs the sum of the two integers.

## Notes

- For `Conversion.c`, additional functionality to count the digits in the binary representation may be added.
- Ensure the `-lm` flag is included during compilation if the program uses mathematical functions from the math library.
