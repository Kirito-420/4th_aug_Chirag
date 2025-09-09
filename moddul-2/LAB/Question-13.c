// Write a C program to create a file, write a string into it, close the file, then
// open the file again to read and display its contents.


#include <stdio.h>

int main() 
{
  FILE *fp;
    char str[100];

    // Open file for writing
    fp = fopen("sample.txt", "w");
    if(fp == NULL) 
    {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Write string to file
    printf("Enter a string to write into the file: ");
    fgets(str, sizeof(str), stdin);
    fputs(str, fp);

    fclose(fp); // Close file after writing
    printf("String written to file successfully.\n");

    // Open file for reading
    fp = fopen("sample.txt", "r");
    if(fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nContents of file:\n");
    while(fgets(str, sizeof(str), fp) != NULL)
    
    {
        printf("%s", str);
    }

    fclose(fp); // Close file after reading

    return 0;
}
