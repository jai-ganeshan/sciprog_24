# Scientific Programming - Practical

## Git Assignment Project

Name : Jayaganeshan Thanga Kumar

Student Number : 24211271

Introduction: This is for Scientific Programming Concepts. It contains various practical assignments and programs to reinforce concepts such as numerical methods, matrix operations, dynamic memory allocation, and more.

## Getting Started

To get started with the materials in this repository:

1. **Clone the Repository**:
   ```
   git clone https://github.com/jai-ganeshan/sciprog_24.git
   ```

2. **Navigate to the Directory:**
   ```
   cd sciprog_24
   ```

## Structure of the Repository

- **Programs**: Contains various C programs demonstrating scientific computing concepts.
- **Resources**: Additional files such as input data or helper functions.
- **Documentation**: Detailed explanations of implemented algorithms and concepts.

## Compilation and Execution

For C programs included in the repository:

### Compile the Program:   

```bash
gcc -o output_filename source_file.c -lm 
# Use the '-lm' flag if the program contains math.h functions

# or

gcc -o output_filename source_file.c
```

### Run the Executable:   

```bash
./output_filename
```

## Example Usage

1. To run a program for matrix multiplication:
   ```bash
   gcc -o Matrix Matrix.c
   ./Matrix
   ```

2. To test a program for magic square verification:
   ```bash
   gcc -o magic_checker main_stub.c
   ./magic_checker
   ```
