#include <stdio.h>

int main() {
    char names[3][50];  // 2-dimensional character array to store names of maximum length 49 characters
    int roll_numbers[3];
    float marks[3];
    char dummy;

    for (int i = 0; i < 3; i++) {
        printf("Enter the name, roll number, and marks of student %d: ", i + 1);
        scanf("%49s %d %f", names[i], &roll_numbers[i], &marks[i]);

        // Consume the newline character left in the input buffer
        scanf("%c", &dummy);
    }

    printf("Printing the students' details....\n");
    for (int i = 0; i < 3; i++) {
        printf("%s %d %.2f\n", names[i], roll_numbers[i], marks[i]);
    }

    return 0;
}
