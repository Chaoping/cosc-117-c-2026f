#include <stdio.h>

int main(){
	int x, y, z;
	x = y = z = 0;
	int a = 2;
	float b = 3.5;	
	/*** 
	 * assignment operator also produce a value:
	 * "z = 0" assigns 0 to z, but itself also has
	 * a value of 0, which can be assigned to y
	***/

	printf("x is %d, y is %d, b is %f\n", x, y, b);
	/***
	 * In quotation mark is a setup (format) string
	 * %d is a format specifier meaning we need a decimal integer here
	 * %f is a float format specifier
	 * we also need the arguments to supply the values to the specifiers 
	***/


	printf("Hello World!\n");
	return 0; // the function is defined to return an int
}
