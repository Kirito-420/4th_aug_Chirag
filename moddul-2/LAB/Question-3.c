// Write a C program that includes variables, constants, and comments. Declare
// and use different data types (int, char, float) and display their values.


#include <stdio.h>

// This is a single-line comment and a multi-line comment.
//    Program has variables, constants, and data types in C.


int main() 
{
    // Constant declaration (value cannot be changed)
    const float PI = 3.14159;

    // Variable declarations
    int age = 20;          // Integer variable
    char grade = 'A';      // Character variable
    float height = 5.9;    // Floating-point variable

    // Displaying values
    printf("Constant PI value: %.2f\n", PI);
    printf("Age (int)        : %d\n", age);
    printf("Grade (char)     : %c\n", grade);
    printf("Height (float)   : %.1f\n", height);

    return 0;
}
