#include <stdio.h>

int main(){
	int a[1];
	int b;
	scanf("%d %d", a, &b);
	// or you could do
	// scanf("%d %d", &a[0], &b);
	// remember the array name is the base address
	// array name with index (like a[0]) is the element
	// &a[0] is the address of the 0th element
	printf("Value in a: %d; value in b: %d\n", a[0], b);
	return 0;
}
