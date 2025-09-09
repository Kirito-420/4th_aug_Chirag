//Write a C program that stores 5 integers in a one-dimensional array and prints
//them. Extend this to handle a two-dimensional array (3x3 matrix) andcalculate the sum of all elements


#include <stdio.h>

int main() 
{
    // One-dimensional array
    int arr[5];
    int i;

    printf("Enter 5 integers for 1D array:\n");
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("1D Array elements are:\n");
    for(i = 0; i < 5; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // Two-dimensional array (3x3 matrix)
    int matrix[3][3];
    int j, sum = 0;

    printf("Enter 9 integers for 3x3 matrix:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("3x3 Matrix is:\n");
    for(i = 0; i < 3; i++)
     {
        for(j = 0; j < 3; j++)
         {
            printf("%d ", matrix[i][j]);
            sum += matrix[i][j]; // Adding elements to sum
        }
        printf("\n");
    }

    printf("\nSum of all elements in 3x3 matrix = %d\n", sum);

    return 0;
}
