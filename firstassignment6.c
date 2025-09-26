#include<stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers (a b): ");
    scanf("%d %d", &a, &b);

    // Swap the numbers using a temporary variable
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}