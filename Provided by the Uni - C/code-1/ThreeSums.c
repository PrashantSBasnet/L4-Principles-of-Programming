#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) 
        sum += i; 
    printf("Sum from 1 to 10 is %d \n", sum);
        
    sum = 0;
    for (int i = 20; i <= 30; i++) 
        sum += i; 
    printf("Sum from 20 to 30 is %d \n", sum);
        
    sum = 0;
    for (int i = 35; i <= 45; i++) 
        sum += i; 
    printf("Sum from 35 to 45 is %d \n", sum);
}
