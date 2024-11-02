#include <stdio.h>
#include <math.h>

// Declaring functions
// Maclaurin series
double mac_approx(double x, double eps); 
// Logarithmic
double log_approx(double x);               
int compare_vals(double p, double q);

int main() {
    double eps, val;
    double mac_results[200], log_results[200];

    // User-input
    printf("Enter a positive precision value: ");
    scanf("%lf", &eps);

    if (eps <= 0) {
        printf("Please enter a positive number!\n");
    } else {
        
        for (int i = 0; i < 180; i++) {
            val = -0.9 + (i * 0.01);
            mac_results[i] = mac_approx(val, eps); 
            log_results[i] = log_approx(val);
            printf("%s\n", compare_vals(mac_results[i], log_results[i]) ? "Match" : "No Match");
        }
    }

    return 0;
}

double mac_approx(double x, double eps) {
    double term = x, result = term;
    int i = 1;
    while (fabs(term) > eps) {
        term = pow(x, 2 * i + 1) / (2 * i + 1);
        result += term;
        i++;
    }
    return result;
}


double log_approx(double x) {
    return 0.5 * (log(1 + x) - log(1 - x));
}


int compare_vals(double p, double q) {
    p = round(p * 1e10) / 1e10;
    q = round(q * 1e10) / 1e10;
    return fabs(p - q) <= 1e-10;
}
