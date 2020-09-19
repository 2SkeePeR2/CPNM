#include <stdio.h>

int main()
{
    long sum = 0;
    int num, factorial = 1, i = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("The sum of factorials is 0\n");
    }
    else
    {
        while (i < num + 1)
        {
            factorial = factorial * i;
            sum += factorial;
            i++;
        }
        printf("The sum of the factorials is %ld", sum);
    }
    return 0;
}