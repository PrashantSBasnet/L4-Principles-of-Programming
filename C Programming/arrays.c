
#include <stdio.h>

int main() {

    // ==========================================
    // PART 1: ONE-DIMENSIONAL ARRAY
    // ==========================================

    // Declare an array to store marks of 5 students
    int marks[5];

    // Variables for calculations
    int sum = 0;
    int max, min;
    double average;

    // Read marks from the keyboard
    printf("Enter marks of 5 students:\n");

    for (int i = 0; i < 5; i++) {

        printf("Student %d: ", i + 1);

        // Store input in the corresponding array element
        scanf("%d", &marks[i]);

        // Add each mark to the sum
        sum += marks[i];
    }

    // Calculate average
    average = (double) sum / 5;

    // ==========================================
    // PART 2: FIND MAXIMUM AND MINIMUM
    // ==========================================

    // Assume the first element is both maximum and minimum
    max = marks[0];
    min = marks[0];

    // Compare the remaining elements
    for (int i = 1; i < 5; i++) {

        if (marks[i] > max) {
            max = marks[i];
        }

        if (marks[i] < min) {
            min = marks[i];
        }
    }

    // Display the results
    printf("\n--- STUDENT MARKS ANALYSIS ---\n");

    printf("Total marks: %d\n", sum);
    printf("Average marks: %.2f\n", average);
    printf("Highest marks: %d\n", max);
    printf("Lowest marks: %d\n", min);

    // ==========================================
    // PART 3: COUNT MARKS ABOVE AVERAGE
    // ==========================================

    int count = 0;

    for (int i = 0; i < 5; i++) {

        // Check whether the current mark is above average
        if (marks[i] > average) {
            count++;
        }
    }

    printf("Students above average: %d\n", count);


    // ==========================================
    // PART 4: TWO-DIMENSIONAL ARRAY
    // ==========================================

    // 3 students and 3 subjects
    // Rows represent students
    // Columns represent subjects

    int studentMarks[3][3] = {
        {80, 75, 90},
        {65, 70, 85},
        {95, 88, 92}
    };

    printf("\n--- TWO-DIMENSIONAL ARRAY ---\n");

    // Display all student marks
    for (int row = 0; row < 3; row++) {

        printf("Student %d: ", row + 1);

        for (int column = 0; column < 3; column++) {

            printf("%d ", studentMarks[row][column]);

        }

        printf("\n");
    }


    // ==========================================
    // PART 5: SUM OF EACH STUDENT'S MARKS
    // ==========================================

    for (int row = 0; row < 3; row++) {

        int total = 0;

        // Calculate the total for the current student
        for (int column = 0; column < 3; column++) {

            total += studentMarks[row][column];

        }

        printf("Total marks of Student %d: %d\n",
               row + 1, total);
    }


    // ==========================================
    // PART 6: ARRAY INITIALIZER
    // ==========================================

    // Declare and initialize an array in one statement
    double temperatures[4] = {25.5, 27.8, 29.1, 26.4};

    printf("\n--- TEMPERATURE VALUES ---\n");

    for (int i = 0; i < 4; i++) {

        printf("%.1f ", temperatures[i]);

    }

    printf("\n");


    // ==========================================
    // PART 7: READING VALUES FROM A FILE
    // ==========================================

    FILE *fp;

    // Open an existing file in read mode
    fp = fopen("marks.txt", "r");

    // Always check whether the file opened successfully
    if (fp == NULL) {

        printf("\nUnable to open marks.txt\n");

    } else {

        int fileMarks[5];
        int fileSum = 0;

        printf("\n--- MARKS READ FROM FILE ---\n");

        // Read 5 integer values from the file
        for (int i = 0; i < 5; i++) {

            if (fscanf(fp, "%d", &fileMarks[i]) != 1) {
                printf("Invalid or insufficient file data.\n");
                break;
            }

            fileSum += fileMarks[i];

            printf("%d ", fileMarks[i]);
        }

        printf("\nTotal from file: %d\n", fileSum);

        // Close the file after reading
        fclose(fp);
    }

    return 0;
}
