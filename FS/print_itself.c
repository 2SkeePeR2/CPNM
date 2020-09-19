#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char ch;
    fptr = fopen(__FILE__, "r");
    if (fptr == NULL)
    {
        printf("Error!");
        return 1;
    }
    while ((ch = fgetc(fptr)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fptr);
    return 0;
}