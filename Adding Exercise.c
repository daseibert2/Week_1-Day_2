// Program to calculate the sum of first n natural numbers
// Positive integers 1,2,3...n are known as natural numbers


#include <stdio.h>

int main()
{
    int num, count, sum = 0;
    
    printf("Enter a postivie integer: \n");
    scanf("%d", &num);
    
    // for loop terminates when n is lass than count
    for(count = 1; count <= num; ++count)
    {
        sum += count;
    }
    
    printf("Sum = %d", sum);
    
    return 0;
}