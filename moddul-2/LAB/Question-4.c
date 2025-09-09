//Write a C program that accepts two integers from the user and performs
//arithmetic, relational, and logical operations on them. Display the results.


#include <stdio.h>

int main() 

{
    int a, b;

    // Input from user
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Arithmetics 
    printf("\n=== Arithmetic Operations ===\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    if (b != 0)
     {
        printf("%d / %d = %d\n", a, b, a / b); // Integer division
        printf("%d %% %d = %d\n", a, b, a % b); // Modulus
    } 
    
    else
    
    {
        printf("Division and modulus not possible (b = 0)\n");
    }

    // Relational Operations 
    printf("\n=== Relational Operations ===\n");
    printf("%d == %d : %d\n", a, b, a == b);
    printf("%d != %d : %d\n", a, b, a != b);
    printf("%d > %d  : %d\n", a, b, a > b);
    printf("%d < %d  : %d\n", a, b, a < b);
    printf("%d >= %d : %d\n", a, b, a >= b);
    printf("%d <= %d : %d\n", a, b, a <= b);

    // Logical 
    printf("\n=== Logical Operations ===\n");
    printf("(%d && %d) : %d\n", a, b, (a && b));
    printf("(%d || %d) : %d\n", a, b, (a || b));
    printf("!(%d)      : %d\n", a, !a);
    printf("!(%d)      : %d\n", b, !b);

    return 0;
}
