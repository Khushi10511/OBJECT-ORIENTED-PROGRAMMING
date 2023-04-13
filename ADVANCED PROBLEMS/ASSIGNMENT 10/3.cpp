// 3. WAP to write 10 strings into a file and display them from file.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sentence[1000];

    // creating file pointer to work with files
    FILE *fptr;

    // opening file in writing mode
    fptr = fopen("3.txt", "w");

    // exiting program
    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Enter 10 strings :\n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    return 0;
}