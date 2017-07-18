// this is meant to teach basic arithmetics
// Complete the program below for all operations:
//   +  -  *  /  %  --x  x--  ++x  x++
// a+= THERE IS NOTHING ON THE RIGHT HAND SIDE, equly to a=a=1
//
// b-= "					equly to b=b-1
// a*= b					equly to a=a*b


#include <stdio.h>

int main(){
	int a=20, b=25, c;
	float divide;
	
	//add
	c=a+b; // never find a+b=c
	printf("1 - result: %d \n", c);

	//subtract
	c=a-b;
	printf("2 - result: %d \n", c);

	//....

	// Division with floats
	b=29;

	//typecasting
	//divide= (float) a/b; // both ints
	divide= a / b; // truncated

	printf("n - result: %f \n", divide);

    return 0;

}