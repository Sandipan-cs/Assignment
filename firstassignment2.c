#include<stdio.h>
#include<math.h> //used it for sqrt and pow functions

int main() {
    int x1, x2, y1, y2;
    float distance;

    // Input coordinates of the two points
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%d %d", &x1, &y1);  

    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    // Calculate the distance using the distance formula
    distance = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)); // or you can use pow function: pow((x2 - x1), 2) + pow((y2 - y1), 2)
    printf("The distance between the two points is: %f\n", distance);


    return 0;
}