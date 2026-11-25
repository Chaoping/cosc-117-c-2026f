#include <stdio.h>

int main(){
	int a[1];
	int b;
	scanf("%d %d", a, &b);
	// or you could do
	// scanf("%d %d", &a[0], &b);
	printf("Value in a: %d; value in b: %d\n", a[0], b);
	return 0;
}
