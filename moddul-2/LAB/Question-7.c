// Write a C program that uses the break statement to stop printing numbers
// when it reaches 5. Modify the program to skip printing the number 3 using the
// continue statement

#include <stdio.h>

int main() 
{
    int i;

    printf("Using break (stop when number reaches 5):\n");
    for(i = 1; i <= 10; i++)
     {
        if(i == 5)
         {
            break;  // stop loop when i == 5
        }
        printf("%d ", i);
    }

    printf("\n\nUsing continue (skip number 3):\n");
    for(i = 1; i <= 10; i++)
     {
        if(i == 3) 
        {
            continue;  // skip printing 3
        }
        printf("%d ", i);
    }

    return 0;
}
