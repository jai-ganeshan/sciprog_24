#include <stdio.h>

int rec(int a, int b) {
    if (b == 0)
        return a;
    return rec(b, a % b);
}

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a <=0 || b <=0){
        printf("Enter positive number only\n");
    }
    else{
        printf("Recursive GCD of %d and %d is %d\n", a, b, rec(a, b));
    }

    
    return 0;
}
