//Write a C program to demonstrate pointer usage. Use a pointer to modify the
//value of a variable and print the result.


#include <stdio.h>

int main()
 {
    int num = 10;       // A normal integer variable
    int *ptr;           // Pointer declaration

    ptr = &num;         // Store the address of num in pointer

    printf("Original value of num: %d\n", num);
    printf("Address of num: %p\n", ptr);

    // Modify value of num using pointer
    *ptr = 25;

    printf("Modified value of num (using pointer): %d\n", num);

    return 0;
}
