// Write a C program that defines a structure to store a student's details (name,
// roll number, and marks). Use an array of structures to store details of 3
// students and print them


#include <stdio.h>

// Define structure for student
struct Student
 {
    char name[50];
    int rollNo;
    int marks;
};

int main()
 {
    struct Student students[3];  // Array of 3 students
    int i;

    // Input student details
    for(i = 0; i < 3; i++)
    
    {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    // Print student details
    printf("\n--- Student Details ---\n");
    for(i = 0; i < 3; i++) 
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNo);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
