#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while (num)
    {
        sum = sum + (num % 10);
        num /= 10;
    }
    sum = abs(sum);
    printf("The sum of the digits of the number is %d", sum);
    return 0;
}