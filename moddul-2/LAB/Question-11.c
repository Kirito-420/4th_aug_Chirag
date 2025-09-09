#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[100], str2[100];

    // Input strings from user
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Concatenate str2 to str1
    strcat(str1, str2);

    // Display result
    printf("Concatenated string: %s\n", str1);
    printf("Length of concatenated string: %lu\n", strlen(str1));

    return 0;
}
