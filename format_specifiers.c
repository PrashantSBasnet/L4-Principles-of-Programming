/*
     * FORMAT SPECIFIERS AND THEIR USAGE
     *
     * %-25s : Prints a string left-aligned within a field
     *         of 25 characters.
     *
     * %d    : Prints a signed integer.
     *
     * %u    : Prints an unsigned integer (a non-negative
     *         integer within its supported range).
     *
     * %f    : Prints a floating-point number.
     *         In printf(), float values are automatically
     *         promoted to double.
     *
     * %.2f  : Prints a floating-point number with exactly
     *         two digits after the decimal point.
     *
     * %c    : Prints a single character.
     *
     * %s    : Prints a string (a sequence of characters
     *         ending with the null character '\0').
     *
     * %x    : Prints an integer in hexadecimal using
     *         lowercase letters (a-f).
     *
     * %X    : Prints an integer in hexadecimal using
     *         uppercase letters (A-F).
     *
     * %o    : Prints an integer in octal (base 8).
     *
     * %p    : Prints a pointer address.
     *         The (void *) cast is used here to match
     *         the required argument type for %p.
     *
     * %%    : Prints a literal percent sign (%).
     *
     * \n    : Moves the cursor to the next line.
     *
     * IMPORTANT:
     * The format specifiers inside quotation marks in
     * the labels below are written as %%d, %%f, etc.
     * because %% prints a literal % character.
     * This allows us to display the format specifier
     * itself rather than interpret it as a conversion.
     */


#include <stdio.h>

int main() {

    // Declare variables of different data types
    int age = 20;
    unsigned int count = 100;
    float height = 5.8f;
    double price = 99.99;
    char grade = 'A';
    char name[] = "Ram";
    int number = 255;

    // Print the heading
    printf("----\n");
    printf("C FORMAT SPECIFIERS\n");
    printf("----\n");

    // Signed integer
    printf("%-25s : %d\n", "Signed integer (%%d)", age);

    // Unsigned integer
    printf("%-25s : %u\n", "Unsigned integer (%%u)", count);

    // Float: printf() promotes float arguments to double
    printf("%-25s : %f\n", "Float (%%f)", height);

    // Double: display exactly two digits after the decimal
    printf("%-25s : %.2f\n", "Double (%%f)", price);

    // Single character
    printf("%-25s : %c\n", "Character (%%c)", grade);

    // String
    printf("%-25s : %s\n", "String (%%s)", name);

    // Hexadecimal using lowercase letters
    printf("%-25s : %x\n", "Hexadecimal (%%x)", number);

    // Hexadecimal using uppercase letters
    printf("%-25s : %X\n", "Hexadecimal (%%X)", number);

    // Octal representation
    printf("%-25s : %o\n", "Octal (%%o)", number);

    // Pointer: print the memory address of the variable age
    printf("%-25s : %p\n", "Pointer (%%p)", (void *)&age);

    // Print a literal percent sign
    printf("%-25s : 10%%\n", "Percent sign (%%%%)");

    // Print a separator line
    printf("====================================\n");

    return 0;
}

