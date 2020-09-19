#include <stdio.h>

int main()
{
    int arr[5][5];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the marks for student %d\n", i + 1);
        for (j = 0; j < 5; j++)
        {
            printf("Enter for subject %d\n", j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    int marks[5];
    int max = 0, sum;
    int k, l;
    for (k = 0; k < 5; k++)
    {
        sum = 0;
        for (l = 0; l < 5; l++)
        {
            sum += arr[k][l];
        }
        if (sum > max)
        {
            max = sum;
        }
        marks[k] = sum;
    }
    int y;
    for (y = 0; y < 5; y++)
    {
        printf("Marks obtained by student %d is %d\n", y + 1, marks[y]);
    }
    printf("Maximum marks obtained is %d", max);
    return 0;
}