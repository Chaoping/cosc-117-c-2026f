#include <stdio.h>

int main(){
	char c; // declare a char variable called c
	int val = 0; // declare an int variable and initialize it to 0 
	//c = getchar(); // read one character from the user, store it in c
	printf("Enter an int: ");	
	/* use a loop to keep reading digits from user
	 * build up a number
	 * until user hits enter
	 */

	// while-loop works the same way as in Java
	// while the character read is not a new-line character:
	// because assignment operator happens after comparison,
	// to force assignment first, we use ()
	while( (c = getchar()) != '\n'){
		// the existing val gets multiplied by 10. 
		// for example 133 becomes 1330 (so we can add a new digit to it)
		val = val * 10;
		
		// c is a character, but we want the number it represents
		// ASCII characters are in order: '0' is 48, '1' is 49, etc.
		// The numerical value of a digit is its difference with '0'
		val = val + c - '0'; // (c - '0') is the difference between c and '0'
	}

	printf("You entered %d\n", val);
	return 0;
}
