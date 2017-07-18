#include <stdio.h>

int main(void)
{
    int array[10],i; // This is an array with 10 elements

    int num;
    
    printf("How many elements (no more than 10)? \n");
    scanf("%d", &num);
    

    for (i=0; i < num; i++)
	scanf("%d", &array[i]); // Remember: the & symbol is needed.

	
	printf("\n Elements with even indices: ");
	for (i =0; i<num ; i+=2)
	//               i+i+2
	    printf(" %d ", array[i]);


    printf("\n"); // Push cursor to next line

    return 0;
}

