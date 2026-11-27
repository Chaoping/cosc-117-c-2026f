#include <stdio.h>

// for the compiler to compile main()
// it needs to know what (not how) sum_of_array() is.
// we can first declare the function here, 
// definition goes after the definition of main()

int sum_of_array(int[], int); // this is a function declaration (aka prototype)
void swap(int[], int, int);


int main(){
	int b[5];
	for(int i=0; i<5; i++){
		b[i] = i*i;
	}
	int temp = sum_of_array(b, 5); 
	// b is the base address of the array
	// b is copied to the callee's local variable a
	// inside callee, a stores the address of the SAME array

	printf("The sum of the array is %d\n", temp);
	
	swap(b, 2, 4);
	for(int i=0; i<5; i++){
		printf("Value at index %d is %d\n", i, b[i]);
	}
	
	return 0;
}

// function that has array parameter
// in C, we need to tell the function the length of the array
int sum_of_array(int a[], int length){
	int sum = 0; // declare and initialize the variable sum
	for(int i=0; i<length; i++){
		sum += a[i];
	}
	return sum;
}


// define a function that does not have any return
void swap(int c[], int i, int j){
	int temp = c[i]; 
	c[i] = c[j];
	c[j] = temp;
	// it has no return, but it works on the same array in the caller
}






