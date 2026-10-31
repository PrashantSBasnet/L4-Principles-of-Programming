// Define and use pointers - Pointers.c

#include <stdio.h>
FILE *fp; //define a file pointer to hold the address of a file
int *pNum; //define an integer pointer to hold the address of an integer variable

int main() {
    //open the file and assign its address to file pointer
    fp = fopen("inputFile.txt", "r");

    int num;
    pNum = &num; //get the address of num and assign it to pointer pNum
    
    //a string is defined as a character array
    //an array name is a pointer
    char word[20]; //a string up to 20 characters

    printf("Enter an integer and a word: \n");
    //scanf requires the address of a varaiable
    scanf(" %d %s", pNum, word); 
    printf("The integer and word you entered are: %d %s\n", num, word);
    printf("The 1st character of the word is:  %c \n", *word);

    printf("Enter another integer and word: \n"); 
    scanf(" %d %s", &num, word);
    printf("The 2nd integer and word you entered are: %d %s \n", num, word);

    printf("The 1st character of the 2nd word is:  %c \n", word[0]);

    printf("The address in pNum is:  %p \n", pNum);
    printf("The address in word is:  %p \n", word);

}
