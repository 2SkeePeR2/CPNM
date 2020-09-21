#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

void jacobi(int sel)
{
    float a[20][20], x[20], e = 1, big, temp, relerror, sum;
    int n = 3, i, j, maxit = 100, itr, z = 0;
    char ch;
    int arr1[] = {1, 1, 1, 6, 1, 1, -1, 0, 1, -1, 1, 2};
    int arr2[] = {1, 1, 1, 3, 2, 3, 1, 6, 1, -1, -1, -3};
    int arr3[] = {2, 4, 2, 15, 2, 1, 2, -5, 4, 1, -2, 0};
    if (sel == 1)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n + 1; j++)
                a[i][j] = arr1[z];
            z++;
        }
    }
    else if (sel == 2)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n + 1; j++)
                a[i][j] = arr2[z];
            z++;
        }
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n + 1; j++)
                a[i][j] = arr3[z];
            z++;
        }
    }
    for (i = 1; i <= n; i++)
        x[i] = 0;
    for (itr = 1; itr <= maxit; itr++)
    {
        big = 0;
        for (i = 1; i <= n; i++)
        {
            sum = 0;
            for (j = 1; j <= n; j++)
            {
                if (i != j)
                    sum = sum + a[i][j] * x[j];
            }
            temp = (a[i][n + 1] - sum) / a[i][i];
            relerror = fabs((x[i] - temp) / temp);
            if (relerror > big)
                big = relerror;
            x[i] = temp;
        }
        if (big <= e)
        {
            for (i = 1; i <= n; i++)
                printf("\n%.4f\t", x[i]);
            getch();
            exit(1);
        }
    }
    printf("does not converge in %d iteration \n", maxit);
    getch();
    printf("By jacobi's method\n");
}

void gaussElimination(int sel)
{
    int i, j, k, n, z = 0;
    float A[20][20], c, x[10], sum = 0.0;
    int arr1[] = {6, 1, 1, 1, 0, 1, 1, -1, 2, 1, -1, 1};
    int arr2[] = {3, 1, 1, 1, 6, 2, 3, 1, -3, 1, -1, -1};
    int arr3[] = {15, 2, 4, 2, -5, 2, 1, 2, 0, 4, 1, -2};
    if (sel == 1)
    {
        for (i = 1; i <= 3; i++)
        {
            for (j = 1; j <= (3 + 1); j++)
            {
                A[i][j] = arr1[z];
                z++;
            }
        }
    }
    else if (sel == 2)
    {
        for (i = 1; i <= 3; i++)
        {
            for (j = 1; j <= (3 + 1); j++)
            {
                A[i][j] = arr2[z];
                z++;
            }
        }
    }
    else
    {
        for (i = 1; i <= 3; i++)
        {
            for (j = 1; j <= (3 + 1); j++)
            {
                A[i][j] = arr3[z];
                z++;
            }
        }
    }
    for (j = 1; j <= 3; j++)
    {
        for (i = 1; i <= 3; i++)
        {
            if (i > j)
            {
                c = A[i][j] / A[j][j];
                for (k = 1; k <= 3 + 1; k++)
                {
                    A[i][k] = A[i][k] - c * A[j][k];
                }
            }
        }
    }
    x[3] = A[3][3 + 1] / A[3][3];
    for (i = 3 - 1; i >= 1; i--)
    {
        sum = 0;
        for (j = i + 1; j <= 3; j++)
        {
            sum = sum + A[i][j] * x[j];
        }
        x[i] = (A[i][3 + 1] - sum) / A[i][i];
    }
    printf("\nThe solution is: \n");
    for (i = 1; i <= 3; i++)
    {
        printf("\nx%d=%f\t", i, x[i]);
    }
    printf("By gauss elimination method\n");
}

double gaussEliminationWithPivot(int m, int n, double a[m][n])
{
    int i, j, k;
    for (i = 0; i < m - 1; i++)
    {
        for (k = i + 1; k < m; k++)
        {
            double term = a[k][i] / a[i][i];
            for (j = 0; j < n; j++)
            {
                a[k][j] = a[k][j] - term * a[i][j];
            }
        }
    }
}

void readMatrix(int m, int n, double matrix[m][n], int sel)
{
    int arr1[] = {6, 1, 1, 1, 0, 1, 1, -1, 2, 1, -1, 1};
    int arr2[] = {3, 1, 1, 1, 6, 2, 3, 1, -3, 1, -1, -1};
    int arr3[] = {15, 2, 4, 2, -5, 2, 1, 2, 0, 4, 1, -2};
    int z = 0;
    int i, j;
    if (sel == 1)
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                matrix[i][j] = arr1[z];
                z++;
            }
        }
    }
    else if (sel == 2)
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                matrix[i][j] = arr2[z];
                z++;
            }
        }
    }
    else
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                matrix[i][j] = arr3[z];
                z++;
            }
        }
    }
}

void printMatrix(int m, int n, double matrix[m][n])
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%lf\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void copyMatrix(int m, int n, double matrix1[m][n], double matrix2[m][n])
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            matrix2[i][j] = matrix1[i][j];
        }
    }
}

void gep(int sel)
{
    int m = 3, n = 4, i, j, selector = sel;
    double a[m][n];
    double U[m][n];
    readMatrix(m, n, a, selector);
    copyMatrix(m, n, a, U);
    gaussEliminationWithPivot(m, n, U);
    printf("\nThe Upper Triangular matrix after Gauss Eliminiation is:\n\n");
    printMatrix(m, n, U);
    printf("By gauss elimination with pivot\n");
}

int main()
{
    int num;
    printf("Enter 1 for first equation\nEnter 2 for second equation\nEnter 3 for third equation\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        gaussElimination(1);
        gep(1);
        jacobi(1);
        break;

    case 2:
        gaussElimination(2);
        gep(2);
        jacobi(2);
        break;

    case 3:
        gaussElimination(3);
        gep(3);
        jacobi(3);
        break;

    default:
        printf("Wrong input\n");
        break;
    }
    return 0;
}