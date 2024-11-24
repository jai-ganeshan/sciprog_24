# Scientific Programming - Practical 04

 Calculating Area under tan(x) using Trapezoidal Rule

## Overview

This C program calculates the values of `tan(x)` for every 5 degrees from 0° to 60° and approximates the area under the curve `tan(x)` using the **Trapezoidal Rule**.

## Program Details

### Key Features

- Converts angles from degrees to radians using a user-defined function.
- Calculates the `tan(x)` values for every 5 degrees and stores them in an array.
- Uses the **Trapezoidal Rule** to approximate the area under the curve `tan(x)` for the given range.

### Code Description

1. **Conversion Function**: Converts degrees to radians using:
   \[ 	ext{radians} = 	ext{degrees} 	imes rac{\pi}{180} \]
2. **Value Storage**: Computes `tan(x)` for each 5-degree increment from 0° to 60° and stores the results in an array.
3. **Area Calculation**: Implements the Trapezoidal Rule to approximate the area under the curve:
   \[ 	ext{Area} = \sum_{i=0}^{n-1} rac{	ext{tan}(x_i) + 	ext{tan}(x_{i+1})}{2} \cdot h \]
   where \( h \) is the interval width in radians (5° converted to radians).

## How to Compile and Run

### Prerequisites

Ensure you have the following installed:

- GCC (or any other C compiler).

### Compilation

To compile the program, run the following command:

```bash
gcc -o Week-4 Week-4.c -lm
```

### Execution

Run the compiled program:

```bash
./Week-4
```

### Expected Output

1. The program prints the values of `tan(x)` for every 5 degrees between 0° and 60°.
2. The approximate area under `tan(x)` for the given range is displayed.

Example output:

```plaintext
Tan(x) values for every 5 degrees):
Tan(0°) = 0.000000
Tan(5°) = 0.087489
Tan(10°) = 0.176327
Tan(15°) = 0.267949
Tan(20°) = 0.363970
Tan(25°) = 0.466308
Tan(30°) = 0.577350
Tan(35°) = 0.700208
Tan(40°) = 0.839100
Tan(45°) = 1.000000
Tan(50°) = 1.191753
Tan(55°) = 1.428148
Tan(60°) = 1.732050
Approximate area under tan(x): 0.896771
```
