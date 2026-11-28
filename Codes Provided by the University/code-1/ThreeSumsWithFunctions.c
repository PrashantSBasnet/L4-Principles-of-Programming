#include <stdio.h>
int sum(int i1, int i2); //function declaration

int main() {
    printf("Sum from 1 to 10 is %d \n", sum(1, 10));
        
    printf("Sum from 20 to 30 is %d \n", sum(20, 30));
        
    printf("Sum from 35 to 45 is %d \n", sum(35, 45));
} //main

int sum(int i1, int i2) { 
    int sum = 0;
    for (int i = i1; i <= i2; i++) 
        sum += i; 
    return sum;
} //sum
