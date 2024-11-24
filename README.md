# Scientific Programming - Practical 03

- **Week-3.c**: A program that creates a doubly-linked list of 200 random integers in the range [0, 49], sorts the list, removes duplicates, and verifies the results.

## Contents

- `Week-3.c`: Implements the creation, sorting, and deduplication of a doubly-linked list.

## Getting Started

To work with this program, follow the steps below.

### Prerequisites

Ensure you have the following installed on your system:

- A C compiler (e.g., GCC)
- Git

### Cloning the Repository

Clone the repository to your local machine using the following command:

```bash
git clone https://github.com/jai-ganeshan/sciprog_24.git
```

Navigate to the `practical03` directory:

```bash
cd sciprog_24/practical03/practical03
```

## Compilation and Execution

**Compilation:**

```bash
gcc -o Week-3 Week-3.c -lm
```

**Execution:**

```bash
./Week-3
```

**Expected Behavior:**

- The program creates a doubly-linked list with 200 random integers between 0 and 49.
- It sorts the list and verifies that it is sorted.
- It removes duplicate elements and verifies that no duplicates remain.
- The program prints the original list, the sorted list with duplicates, and the sorted list without duplicates.

