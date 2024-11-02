#include <stdio.h>
#include <math.h>

// Declaring an integer N=13 
int N=13;

//Storing the values of tan(x) in an array
double array[13];

// User-defined function for converting degrees to radians
double c(int degree) {
    return degree * 3.14159 / 180.0;
}

// User-defined function to calculate values of tan(x) and storing it in an array
void f() {
    int i;
    for (i = 0; i < N; i++) {
        int degree = i * 5;          
        double radian = c(degree);        
        array[i] = tan(radian);           
    }
}


//User-defined function to calculate area under tan(x)
double ar(int n) {
    double s = 0.0;
    double h = 3.14159 / 180.0 * 5;  
    int i;
    for (i = 0; i < n - 1; i++) {
        // Trapezoidal Rule
        s += (array[i] + array[i + 1]) * h / 2;  
    }

    return s;
}

int main() {
    f();  

    // Printing tan(x) values for every 5 degrees
    int i;
    printf("Tan(x) values for every 5 degrees):\n");

    //For-loop to print tan(x) values from 0 to 60
    for (i = 0; i < N; i++) {
        printf("Tan(%d°) = %f\n", i * 5, array[i]);
    }

    // Calculating area under tan(x) values
    double area = ar(N);
    printf("Approximate area under tan(x): %lf\n", area);

    return 0;
}
