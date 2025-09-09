// o Write a C program to check if a number is even or odd using an if-else
// statement. Extend the program using a switch statement to display the month
// name based on the user’s input (1 for January, 2 for February, etc.).

#include <stdio.h>

int main() 
{
    int num, choice;

    do
     {
        printf("\n===== MENU =====\n");
        printf("1. Enter Number (Odd/Even Months)\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter an integer: ");
                scanf("%d", &num);

                if (num % 2 == 0) 
                {
                    printf("\n%d is Even > Months with 30 days:\n", num);
                    printf("April, June, September, November\n");
                    printf("February has 28/29 days (special case).\n");
                } 
                
                else 
                
                {
                    printf("\n%d is Odd > Months with 31 days:\n", num);
                    printf("January, March, May, July, August, October, December\n");
                }
                break;

            case 2:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please select 1 or 2.\n");
        }

    } while (choice != 2);

    return 0;
}
