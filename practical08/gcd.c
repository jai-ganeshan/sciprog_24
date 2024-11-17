#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a <=0 || b <=0){
        printf("Enter positive number only\n");
    }
    else{
        printf("Iterative GCD of %d and %d is %d\n", a, b, gcd(a, b));
    }
    return 0;
}
