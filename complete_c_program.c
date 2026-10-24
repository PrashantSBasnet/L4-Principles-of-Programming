/*
 * COMPLETE C PROGRAM: Selection Statements, Loops, Characters,
 * Strings, and a To-Do List Case Study
 *
 * Topics covered:
 * 1. Boolean data type and Boolean expressions
 * 2. One-way if, two-way if-else, nested if, else-if ladder
 * 3. switch statements
 * 4. while, do-while, and for loops
 * 5. Increment and decrement operators
 * 6. Nested loops
 * 7. Character and string operations
 * 8. Case study: To-Do List
 *
 * Compile:
 *   gcc complete_c_program.c -o complete_c_program
 *
 * Run:
 *   ./complete_c_program
 *   On Windows Command Prompt: complete_c_program.exe
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define MAX_TASKS 100
#define TASK_LENGTH 100

typedef struct {
    char description[TASK_LENGTH];
    bool completed;
} Task;

/* Remove the leftover characters from the input line. */
void clear_input_buffer(void) {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        /* Discard characters. */
    }
}

/* Read an integer safely enough for a beginner-level menu program. */
int read_int(const char *prompt) {
    int value;
    int result;

    while (1) {
        printf("%s", prompt);
        result = scanf("%d", &value);

        if (result == 1) {
            clear_input_buffer();
            return value;
        }

        if (result == EOF) {
            printf("\nInput ended. Exiting.\n");
            return 0;
        }

        printf("Invalid input. Please enter a whole number.\n");
        clear_input_buffer();
    }
}

/* Read a full line, including spaces. */
void read_line(const char *prompt, char text[], int size) {
    size_t length;

    printf("%s", prompt);

    if (fgets(text, size, stdin) == NULL) {
        text[0] = '\0';
        return;
    }

    length = strlen(text);

    if (length > 0 && text[length - 1] == '\n') {
        text[length - 1] = '\0';
    } else {
        clear_input_buffer();
    }
}

void show_selection_examples(void) {
    int age = read_int("\nEnter your age: ");

    /* Boolean data type and Boolean expression. */
    bool is_adult = (age >= 18);

    printf("\n--- Boolean expression ---\n");
    printf("age >= 18 evaluates to: %s\n", is_adult ? "true" : "false");

    /* One-way if statement: code runs only when condition is true. */
    printf("\n--- One-way if ---\n");
    if (age >= 18) {
        printf("You are an adult.\n");
    }

    /* Two-way if-else statement. */
    printf("\n--- Two-way if-else ---\n");
    if (age >= 18) {
        printf("You are eligible to vote in many countries, subject to local law.\n");
    } else {
        printf("You are not yet 18.\n");
    }

    /* Nested if statement. */
    printf("\n--- Nested if ---\n");
    if (age >= 0) {
        if (age >= 18) {
            printf("Your age is non-negative and you are an adult.\n");
        } else {
            printf("Your age is non-negative and you are under 18.\n");
        }
    } else {
        printf("Age cannot be negative.\n");
    }

    /* Multi-way if-else-if ladder. */
    printf("\n--- Multi-way if-else-if ---\n");
    if (age < 0) {
        printf("Invalid age.\n");
    } else if (age < 13) {
        printf("Category: child.\n");
    } else if (age < 20) {
        printf("Category: teenager.\n");
    } else if (age < 60) {
        printf("Category: adult.\n");
    } else {
        printf("Category: senior adult.\n");
    }

    /* switch statement. */
    printf("\n--- Switch statement ---\n");
    printf("Choose a day number (1-7): ");
    int day = read_int("");

    switch (day) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid day number. Enter a value from 1 to 7.\n");
    }
}

void show_loop_examples(void) {
    int n = read_int("\nEnter a positive integer (1-20): ");

    if (n < 1 || n > 20) {
        printf("Please enter a number from 1 to 20 next time.\n");
        return;
    }

    printf("\n--- while loop: count from 1 to %d ---\n", n);
    int i = 1;
    while (i <= n) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    printf("\n--- do-while loop: count from 1 to %d ---\n", n);
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= n);
    printf("\n");

    printf("\n--- for loop: count from 1 to %d ---\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("\n--- Increment and decrement operators ---\n");
    int count = 5;
    printf("Initial count = %d\n", count);
    count++;
    printf("After count++: %d\n", count);
    count--;
    printf("After count--: %d\n", count);
    ++count;
    printf("After ++count: %d\n", count);
    --count;
    printf("After --count: %d\n", count);

    printf("\n--- Nested loops: multiplication table ---\n");
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            printf("%4d", row * col);
        }
        printf("\n");
    }
}

void show_character_string_examples(void) {
    char character;
    char text[TASK_LENGTH];
    char copy[TASK_LENGTH];
    int letters = 0;
    int digits = 0;
    int spaces = 0;
    int i;

    printf("\n--- Character operations ---\n");
    printf("Enter one character: ");
    int input = getchar();

    if (input == EOF) {
        printf("No character received.\n");
        return;
    }

    character = (char)input;
    clear_input_buffer();

    printf("Character: %c\n", character);

    if (isalpha((unsigned char)character)) {
        printf("It is an alphabetic character.\n");
    } else if (isdigit((unsigned char)character)) {
        printf("It is a digit.\n");
    } else if (isspace((unsigned char)character)) {
        printf("It is a whitespace character.\n");
    } else {
        printf("It is a punctuation or other character.\n");
    }

    printf("Uppercase form (if applicable): %c\n",
           (char)toupper((unsigned char)character));
    printf("Lowercase form (if applicable): %c\n",
           (char)tolower((unsigned char)character));

    printf("\n--- String operations ---\n");
    read_line("Enter a line of text: ", text, TASK_LENGTH);

    printf("You entered: %s\n", text);
    printf("String length: %zu characters\n", strlen(text));

    /* Copy a string using strcpy. */
    strcpy(copy, text);
    printf("Copied string: %s\n", copy);

    /* Count letters, digits, and spaces. */
    for (i = 0; text[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)text[i];

        if (isalpha(ch)) {
            letters++;
        } else if (isdigit(ch)) {
            digits++;
        } else if (isspace(ch)) {
            spaces++;
        }
    }

    printf("Letters: %d\n", letters);
    printf("Digits: %d\n", digits);
    printf("Whitespace characters: %d\n", spaces);

    /* Compare two strings using strcmp. */
    char other[TASK_LENGTH];
    read_line("Enter another string to compare: ", other, TASK_LENGTH);

    int comparison = strcmp(text, other);
    if (comparison == 0) {
        printf("The strings are identical.\n");
    } else {
        printf("The strings are different.\n");
    }

    /* Convert the original text to uppercase in place. */
    for (i = 0; text[i] != '\0'; i++) {
        text[i] = (char)toupper((unsigned char)text[i]);
    }
    printf("Uppercase string: %s\n", text);
}

void list_tasks(const Task tasks[], int task_count) {
    if (task_count == 0) {
        printf("\nYour to-do list is empty.\n");
        return;
    }

    printf("\n--- Your To-Do List ---\n");
    for (int i = 0; i < task_count; i++) {
        printf("%d. [%c] %s\n",
               i + 1,
               tasks[i].completed ? 'X' : ' ',
               tasks[i].description);
    }
}

void add_task(Task tasks[], int *task_count) {
    if (*task_count >= MAX_TASKS) {
        printf("Task limit reached. You cannot add more tasks.\n");
        return;
    }

    char description[TASK_LENGTH];
    read_line("Enter the task description: ", description, TASK_LENGTH);

    if (description[0] == '\0') {
        printf("Empty tasks are not allowed.\n");
        return;
    }

    strcpy(tasks[*task_count].description, description);
    tasks[*task_count].completed = false;
    (*task_count)++;

    printf("Task added successfully.\n");
}

void mark_task_completed(Task tasks[], int task_count) {
    if (task_count == 0) {
        printf("There are no tasks to update.\n");
        return;
    }

    list_tasks(tasks, task_count);
    int number = read_int("Enter the task number to mark as completed: ");

    if (number < 1 || number > task_count) {
        printf("Invalid task number.\n");
        return;
    }

    tasks[number - 1].completed = true;
    printf("Task marked as completed.\n");
}

void delete_task(Task tasks[], int *task_count) {
    if (*task_count == 0) {
        printf("There are no tasks to delete.\n");
        return;
    }

    list_tasks(tasks, *task_count);
    int number = read_int("Enter the task number to delete: ");

    if (number < 1 || number > *task_count) {
        printf("Invalid task number.\n");
        return;
    }

    /* Shift later tasks one position to the left. */
    for (int i = number - 1; i < *task_count - 1; i++) {
        tasks[i] = tasks[i + 1];
    }

    (*task_count)--;
    printf("Task deleted successfully.\n");
}

void search_tasks(const Task tasks[], int task_count) {
    char query[TASK_LENGTH];
    bool found = false;

    if (task_count == 0) {
        printf("There are no tasks to search.\n");
        return;
    }

    read_line("Enter a word or phrase to search for: ", query, TASK_LENGTH);

    if (query[0] == '\0') {
        printf("Search text cannot be empty.\n");
        return;
    }

    printf("\n--- Search Results ---\n");
    for (int i = 0; i < task_count; i++) {
        if (strstr(tasks[i].description, query) != NULL) {
            printf("%d. [%c] %s\n",
                   i + 1,
                   tasks[i].completed ? 'X' : ' ',
                   tasks[i].description);
            found = true;
        }
    }

    if (!found) {
        printf("No matching tasks found. Search is case-sensitive.\n");
    }
}

void show_todo_list(void) {
    Task tasks[MAX_TASKS];
    int task_count = 0;
    int choice;

    do {
        printf("\n========== TO-DO LIST ==========\n");
        printf("1. Add a task\n");
        printf("2. View all tasks\n");
        printf("3. Mark a task as completed\n");
        printf("4. Delete a task\n");
        printf("5. Search tasks\n");
        printf("0. Return to main menu\n");

        choice = read_int("Choose an option: ");

        switch (choice) {
            case 1:
                add_task(tasks, &task_count);
                break;
            case 2:
                list_tasks(tasks, task_count);
                break;
            case 3:
                mark_task_completed(tasks, task_count);
                break;
            case 4:
                delete_task(tasks, &task_count);
                break;
            case 5:
                search_tasks(tasks, task_count);
                break;
            case 0:
                printf("Returning to the main menu.\n");
                break;
            default:
                printf("Invalid option. Please choose 0-5.\n");
        }
    } while (choice != 0);
}

int main(void) {
    int choice;

    do {
        printf("\n============================================\n");
        printf(" C PROGRAMMING: TOPIC DEMONSTRATIONS\n");
        printf("============================================\n");
        printf("1. Selection statements and Boolean values\n");
        printf("2. Loops, increment/decrement, and nested loops\n");
        printf("3. Character and string operations\n");
        printf("4. Case study: To-Do List\n");
        printf("0. Exit\n");

        choice = read_int("Choose an option: ");

        switch (choice) {
            case 1:
                show_selection_examples();
                break;
            case 2:
                show_loop_examples();
                break;
            case 3:
                show_character_string_examples();
                break;
            case 4:
                show_todo_list();
                break;
            case 0:
                printf("Thank you for practicing C programming!\n");
                break;
            default:
                printf("Invalid option. Please choose 0-4.\n");
        }
    } while (choice != 0);

    return 0;
}
