// PassArrays2Functions.c

#include <stdio.h>
int m(int number, int numbers[]);

int main() {
	int x = 1; //x is an integer
    int y[10]; //y is an array of integers
    
	y[0] = 100; //y[0] has a value of 100

	printf("x before is %d \n", x);
	printf("y[0] before is %d \n", y[0]);
	
	m(x, y); //invoke m with arguments x and y
	
	printf("x after is %d \n", x);
	printf("y[0] after is %d \n", y[0]);
}

int m(int number, int numbers[]) {
	number = 1001; // Assign a new value to number
	numbers[0] = 5555; // Assign a new value to numbers[0]
    return 0;
}