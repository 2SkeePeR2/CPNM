#include <stdio.h>

int main()
{
    int a[10][10], transpose[10][10], r, c, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Entered matrix: \n");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            transpose[j][i] = a[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < c; ++i)
    {
        for (j = 0; j < r; ++j)
        {
            printf("%d  ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}