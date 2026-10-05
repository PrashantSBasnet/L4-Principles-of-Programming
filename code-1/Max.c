#include <stdio.h>
int max(int num1, int num2);

int max(int num1, int num2) {
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;
    
    return result;
}


int main() {
    int i = 5;
    int j = 22;
    int k = max(i, j);

    printf("The maximum between %d and %d is %d\n", i, j, k); 
}
