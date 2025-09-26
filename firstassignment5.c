#include<stdio.h>

int main() {
    int x, y, q, r;

    // input divided & divisor
    printf("enter the dividend(x) & Divisor(y) : ");
    scanf("%d %d", &x, &y);

    q = x / y; // quotient
    r = x % y; // remainder

    printf("The quotient is %d and remainder is %d\n", q, r);


    return 0;
}