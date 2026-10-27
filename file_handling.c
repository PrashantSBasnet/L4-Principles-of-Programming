
/*
 * ============================================================
 * C PROGRAMMING: FILE HANDLING
 * ============================================================
 *
 * File handling allows a C program to store data in a file
 * and retrieve that data later.
 *
 * In this program, we will learn how to:
 * 1. Create a file and write data into it.
 * 2. Read data from a file.
 * 3. Append new data to an existing file.
 * 4. Read the file again to verify the appended data.
 *
 * The file used in this example is students.txt.
 */


// Include the standard input/output library.
// It provides FILE, fopen(), fprintf(), fgets(), fclose(),
// printf(), and other input/output functions.
#include <stdio.h>


int main() {

    // --------------------------------------------------------
    // STEP 1: DECLARE VARIABLES
    // --------------------------------------------------------

    // FILE is a type defined in the C standard library.
    // It stores the information needed to work with an open file.
    //
    // fp is a FILE pointer.
    // It points to the FILE object associated with the file
    // opened by fopen().
    //
    // We use fp to read from or write to the file.
    FILE *fp;

    // A character array that temporarily stores text read
    // from the file.
    //
    // Its capacity is 100 characters, including the terminating
    // null character '\0'.
    char text[100];


    // --------------------------------------------------------
    // STEP 2: OPEN THE FILE IN WRITE MODE
    // --------------------------------------------------------

    /*
     * fopen() opens a file.
     *
     * Syntax:
     * fopen("filename", "mode");
     *
     * "students.txt" is the name of the file.
     *
     * "w" means WRITE mode:
     * - If the file does not exist, it is created.
     * - If the file already exists, its contents are erased.
     * - If opening the file fails, fopen() returns NULL.
     *
     * The returned FILE pointer is stored in fp.
     */
    fp = fopen("students.txt", "w");


    // Always check whether the file opened successfully.
    // If fp is NULL, we must not try to write to the file.
    if (fp == NULL) {
        printf("Error opening file!\n");

        // Return 1 indicates that the program ended
        // because of an error.
        return 1;
    }


    // --------------------------------------------------------
    // STEP 3: WRITE DATA INTO THE FILE
    // --------------------------------------------------------

    /*
     * fprintf() writes formatted text to a file.
     *
     * Syntax:
     * fprintf(file_pointer, "format string", values);
     *
     * Unlike printf(), which displays output on the screen,
     * fprintf() writes output to the file associated with fp.
     *
     * The '\n' character moves to a new line in the file.
     */
    fprintf(fp, "Ram is 20 years old.\n");
    fprintf(fp, "Sita is 21 years old.\n");


    /*
     * fclose() closes the file.
     *
     * It also ensures that buffered output is flushed as part
     * of closing the stream.
     *
     * Once the file is closed, we should not use fp to access
     * that file until it has been opened again.
     */
    fclose(fp);

    printf("Data written successfully.\n");


    // --------------------------------------------------------
    // STEP 4: OPEN THE FILE IN READ MODE
    // --------------------------------------------------------

    /*
     * "r" means READ mode:
     * - The file must already exist.
     * - The existing contents are not erased.
     * - We can read the contents but cannot write through
     *   this file stream.
     * - If the file cannot be opened, fopen() returns NULL.
     */
    fp = fopen("students.txt", "r");


    // Check whether the file opened successfully.
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }


    printf("\nReading from file:\n");


    // --------------------------------------------------------
    // STEP 5: READ THE FILE LINE BY LINE
    // --------------------------------------------------------

    /*
     * fgets() reads a line or a portion of a line from a file.
     *
     * Syntax:
     * fgets(character_array, maximum_size, file_pointer);
     *
     * Here:
     * - text is where the read characters are stored.
     * - sizeof(text) gives the size of the array (100 bytes).
     * - fp identifies the file being read.
     *
     * fgets() reads at most 99 characters per call, leaving
     * space for the terminating '\0'.
     *
     * It stops when it encounters a newline, reaches the size
     * limit, or reaches the end of the file.
     *
     * It returns text when reading succeeds and NULL when
     * there is no more input or a read error occurs.
     *
     * The loop continues as long as fgets() returns a
     * non-NULL pointer.
     */
    while (fgets(text, sizeof(text), fp) != NULL) {

        // Display the text that was read from the file.
        // fgets() usually preserves the newline character,
        // so we do not need to add another '\n' here.
        printf("%s", text);
    }


    // Close the file after finishing reading.
    fclose(fp);


    // --------------------------------------------------------
    // STEP 6: OPEN THE FILE IN APPEND MODE
    // --------------------------------------------------------

    /*
     * "a" means APPEND mode:
     * - If the file does not exist, it is created.
     * - If the file already exists, its contents are preserved.
     * - New data is written at the end of the file.
     * - Existing contents are not erased.
     *
     * This differs from "w", which erases existing contents.
     */
    fp = fopen("students.txt", "a");


    // Check whether the file opened successfully.
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }


    // --------------------------------------------------------
    // STEP 7: APPEND NEW DATA
    // --------------------------------------------------------

    // Because the file is opened in append mode, this line
    // is added to the end of students.txt.
    fprintf(fp, "Hari is 22 years old.\n");


    // Close the file after writing the appended data.
    fclose(fp);

    printf("\nData appended successfully.\n");


    // --------------------------------------------------------
    // STEP 8: READ THE FILE AGAIN
    // --------------------------------------------------------

    // Open the file in read mode to verify that the new data
    // has been added without removing the previous contents.
    fp = fopen("students.txt", "r");


    // Check whether the file opened successfully.
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }


    printf("\nFinal file contents:\n");


    // Read and display the complete file again.
    // The loop stops when fgets() returns NULL.
    while (fgets(text, sizeof(text), fp) != NULL) {
        printf("%s", text);
    }


    // Close the file after the final read.
    fclose(fp);


    // Return 0 to indicate successful program execution.
    return 0;
}


//=====
