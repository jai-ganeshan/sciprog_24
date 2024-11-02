#include <stdio.h>
#include <math.h>

int main() {
    //Declaring  the variables
    int i;
    double a = 0, b = 3.14159 / 3; //note: b= pi_value divided by 3
    double h = (b - a) / 12; //where 12 is N 
    double sum = 0;
    double diff;

    // Adding first and last term of the equation
    sum = sum + tan(a) + tan(b);

    // Using 'for' loop method to get 11 equidistant points
    for (i = 1; i < 12; i++) {
        double x = a + i * h;
        sum += 2 * tan(x);
    }

    // Adding that sum to end points and multiplying by (b-a)/(2*N)
    double integral = (b - a) * sum / (2 * 12);

    //Printing the result of integral of tan(x) and log(2)
    printf("Integral of tan(x) = %.8f\n", integral);
    printf("Result of log(2) = %.8f\n", log(2.0));

    //Calculating Differences of integral and log(2)
    diff=integral - log(2.0);
    
    //Printing the Differences
    printf("Difference = %.8f\n", diff);

    return 0;
}
