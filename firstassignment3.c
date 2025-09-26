#include<stdio.h>

 int main(){
    int x;
    
    //Demonstrating logical NOT
    printf("Enter a number for logical NOT (!x):");
    scanf("%d", &x);
    printf("Result of !x is: %d\n\n", !x);
    
    //Demonstrating bit wise NOT
    printf("Enter a Number for bitwise NOT (~x):");
    scanf("%d", &x);
    printf("Result of ~x is: %d\n",~x);

    return 0;
 }