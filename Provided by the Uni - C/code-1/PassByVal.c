#include <stdio.h>

int increment(int n);

int increment(int n) {
	n++;
	printf("n inside the function is %d \n", n);
	return 0;
} //increment

int main() {
	int x = 1;
	printf("Before the call, x is %d \n", x);
	increment(x); //1 is passed to increment
	printf("After the call, x is %d \n", x); 
} //main
