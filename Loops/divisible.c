#include <stdio.h>

int main()
{
    int divisor;
    printf("Enter the divisor: ");
    scanf("%d", &divisor);
    printf("The numbers divisible by %d are\n", divisor);
    int i = 1;
    while (i * divisor <= 100)
    {
        printf("%d ", divisor * i);
        i++;
    }
    return 0;
}