#include<stdio.h>

int main() {
    int b, h;
    float area;

    // Input base and height of the triangle
    
    printf("Enter base and height of the triangle: ");

    scanf("%d %d", &b, &h);

    area = 0.5 * b * h; // Calculate the area of the triangle
    printf("The area of the triangle is: %f\n", area);

    
    return 0;
}