#include <stdio.h>
#include <stdlib.h>

//function to calculate factorial
double factorial(int n) {
    double factorial_1 = 1;
    for (int i = 1; i <= n; i++) {
        factorial_1 *= i;
    }
    return factorial_1;
}

//function to estimate value of e by using taylor series
double estimate_e(int order) {
    double *term = (double *)malloc((order + 1) * sizeof(double));
    if (term == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
    }

    double sum = 0;
    for (int i = 0; i <= order; i++) {
        term[i] = 1.0 / factorial(i);  
        sum += term[i];
    }

    free(term); 
    return sum;
}

int main() {
    int order;
    printf("Enter the order for estimate e: ");
    scanf("%d", &order);

    // calling the function and displaying the result
    double e_approx = estimate_e(order);
    printf("Approximate value of e using order %d: %f\n", order, e_approx);

    return 0;
}
