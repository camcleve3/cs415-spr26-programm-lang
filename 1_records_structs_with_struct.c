#include <stdio.h>
#include <string.h>

// Define a struct to hold student information
typedef struct {
    char name[50];
    int age;
    float gpa;
    char grade_level[20];
} Student;

int main() {
    // Create an array of students
    Student students[3] = {
        {"Alex Johnson", 18, 3.91f, "freshman"},
        {"Cam Smith", 20, 3.84f, "sophomore"},
        {"Carol White", 21, 3.72f, "junior"}
    };

    // Display student information
    printf("=== Student Records (Using Structs) ===\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("GPA: %.2f\n", students[i].gpa);
        printf("Grade Level: %s\n", students[i].grade_level);
        printf("---\n");
    }

    return 0;
}
