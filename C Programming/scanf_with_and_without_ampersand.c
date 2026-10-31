#include <stdio.h>

int main() {
    // Declare and initialize an integer variable
    int age = 10;

    // Declare and initialize a character array (string)
    // The array has 5 elements, enough to store up to
    // 4 characters plus the terminating null character '\0'.
    char name[5] = "Ram";

    // Print the value stored in the integer variable
    printf("Age value: %d\n", age);

    // Print the memory address of the integer variable
    // The & operator gives the address of the variable.
    printf("Age address: %p\n", (void *)&age);

    // Print the string stored in the character array
    printf("Name: %s\n", name);

    // Print the starting address of the character array
    // The array name converts to a pointer to its first
    // element in this expression.
    printf("Name array address: %p\n", (void *)name);

    // Print the address of the first character explicitly
    printf("First character address: %p\n", (void *)&name[0]);

    return 0;
}


//------

```c
/**
 * HOW TO USE scanf() AND THE ADDRESS-OF OPERATOR (&)
 *
 * scanf() reads user input and stores it in memory.
 * It needs an appropriate pointer to identify where
 * the input should be stored.
 *
 * RULES TO REMEMBER:
 *
 * 1. ORDINARY VARIABLES:
 *    Use the address-of operator (&) to pass the
 *    variable's memory address to scanf().
 *
 *    Examples:
 *    scanf("%d", &age);       // Integer
 *    scanf("%f", &height);    // Float
 *    scanf("%lf", &price);    // Double
 *    scanf(" %c", &grade);    // Single character
 *
 * 2. CHARACTER ARRAYS (STRINGS):
 *    When using %s, pass the array name WITHOUT &.
 *    The array name automatically converts to a pointer
 *    to its first element when passed to scanf().
 *
 *    Example:
 *    char name[20];
 *    scanf("%19s", name);
 *
 *    NOTE: %19s limits input to 19 characters, leaving
 *    space for the terminating null character '\0'.
 *
 * 3. INITIALIZATION DOES NOT CHANGE THE RULE:
 *    Even if a variable has an initial value, use &
 *    when reading a new value with scanf().
 *
 *    Example:
 *    int age = 10;
 *    scanf("%d", &age);
 *
 *    Here, &age provides the memory address where
 *    scanf() stores the newly entered integer.
 *
 * KEY TAKEAWAY:
 *    Ordinary variables  -> Use &
 *    Character arrays    -> Do not use & with %s
 */
```



#include <stdio.h>

int main() {
    int age;
    char grade;
    char name[20];

    // 1. INTEGER: Use & with an ordinary variable
    printf("Enter your age: ");
    scanf("%d", &age);
    // &age provides the memory address where scanf()
    // will store the integer entered by the user.

    // 2. CHARACTER: Use & with a single character variable
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    // &grade provides the memory address of the character.
    // The space before %c skips leading whitespace,
    // such as a newline left by the previous input.

    // 3. STRING: Do NOT use & with a character array
    printf("Enter your name: ");
    scanf("%19s", name);
    // The array name automatically converts to a pointer
    // to its first element.
    // %19s limits input to 19 characters, leaving space
    // for the terminating null character '\0'.

    // Display the values entered by the user
    printf("\n--- User Information ---\n");
    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);
    printf("Name: %s\n", name);

    return 0;
}











