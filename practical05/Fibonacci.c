#include <stdio.h>

// Function declaration with inputs as pointers
void fib(int *x, int *y);

int main() {
    int a, zero = 0, one = 1;

    
    printf("Enter the integer value: ");
    // Prompting user to enter the value of n
    scanf("%d", &a);

    // If the input value is zero, it returns zero 
    if (a == 0) {
        printf("Fibonacci series is %d\n", zero);
    } else {
        printf("Fibonacci series is %d %d ", zero, one);

        // For-loop to calculate the remaining values of the series
        for (int i = 2; i <= a; i++) {
            fib(&zero, &one);  // Used to calculaye next term
        }
    }

    return 0;
}

// Function to generate Fibonacci series 
void fib(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp + (*x);
    printf("%d ", *y);
}
