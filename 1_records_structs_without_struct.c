#include <stdio.h>
#include <string.h>

int main() {
    // Without structs: store data in parallel arrays
    char names[3][50] = {"Alice Johnson", "Bob Smith", "Carol White"};
    int ages[3] = {18, 19, 20};
    float gpas[3] = {3.85f, 3.92f, 3.76f};
    char grade_levels[3][20] = {"freshman", "sophomore", "junior"};

    // Display student information
    printf("=== Student Records (Without Structs) ===\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s\n", names[i]);
        printf("Age: %d\n", ages[i]);
        printf("GPA: %.2f\n", gpas[i]);
        printf("Grade Level: %s\n", grade_levels[i]);
        printf("---\n");
    }

    return 0;
}
