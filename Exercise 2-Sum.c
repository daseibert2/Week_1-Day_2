#include <stdio.h>

int main() {
    
    //declarations
    int int1, int2, sum;
    double radius, circumference, area;
    double pi = 3.14159265;
    
    //IO
    printf("Enter integer 1: ");
    scanf("%d", &int1);
    printf("\nEnter integer 2: ");
    scanf("%d", &int2);
    printf("\nEnter the radius: ");
    scanf("%lf", &radius);
    
    //Computations
    sum = int1 + int2;
    area = radius * radius * pi;
    circumference = 2.0 * radius * pi;
    
    //Output
    printf("\nThe sum of %d and %d is %d", int1, int2, sum);
    printf("\nThe radius is %lf", radius);
    printf("\nThe area is %lf", area);
    printf("\nThe circumference is %lf", circumference);
    
    return 0;
    
}