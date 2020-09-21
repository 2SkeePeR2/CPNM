#include <stdio.h>
#include <math.h>
#define MAXN 100
#define ORDER 4

void forwardinterpolation()
{
    float ax[MAXN + 1], ay[MAXN + 1], diff[MAXN + 1][ORDER + 1], nr = 1.0, dr = 1.0, x, p, h, yp;
    int n, i, j, k;
    printf("\nEnter the value of n:\n");
    scanf("%d", &n);

    printf("\nEnter the values in form x,y:\n");
    for (i = 0; i <= n; i++)
        scanf("%f %f", &ax[i], &ay[i]);
    printf("\nEnter the value of x for which the value of y is wanted: \n");
    scanf("%f", &x);
    h = ax[1] - ax[0];

    for (i = 0; i <= n - 1; i++)
        diff[i][1] = ay[i + 1] - ay[i];

    for (j = 2; j <= ORDER; j++)
        for (i = 0; i <= n - j; i++)
            diff[i][j] = diff[i + 1][j - 1] - diff[i][j - 1];

    i = 0;
    while (!(ax[i] > x))
        i++;

    i--;
    p = (x - ax[i]) / h;
    yp = ay[i];

    for (k = 1; k <= ORDER; k++)
    {
        nr *= p - k + 1;
        dr *= k;
        yp += (nr / dr) * diff[i][k];
    }
    printf("\nWhen x = %6.1f, corresponding y = %6.2f\n", x, yp);
}

void backwardinterpolation()
{
    float ax[MAXN + 1], ay[MAXN + 1], diff[MAXN + 1][ORDER + 1], nr = 1.0, dr = 1.0, x, p, h, yp;
    int n, i, j, k;
    printf("\nEnter the value of n:\n");
    scanf("%d", &n);

    printf("\nEnter the values in form x,y:\n");
    for (i = 0; i <= n; i++)
        scanf("%f %f", &ax[i], &ay[i]);
    printf("\nEnter the value of x for which the value of y is wanted: \n");
    scanf("%f", &x);
    h = ax[1] - ax[0];

    for (i = 0; i <= n - 1; i++)
        diff[i][1] = ay[i + 1] - ay[i];

    for (j = 2; j <= ORDER; j++)
        for (i = 0; i <= n - j; i++)
            diff[i][j] = diff[i + 1][j - 1] - diff[i][j - 1];

    i = 0;
    while (!(ax[i] > x))
        i++;

    i--;
    p = (x - ax[i]) / h;
    yp = ay[i];

    for (k = 1; k <= ORDER; k++)
    {
        nr *= p - k + 1;
        dr *= k;
        yp += (nr / dr) * diff[i][k];
    }
    printf("\nWhen x = %6.1f, corresponding y = %6.2f\n", x, yp);
}

void lagrange()
{

    int n, i, j;
    printf("enter n:\n");
    scanf("%d", &n);

    float x[100], y[100], search, ans = 0;
    printf("enter values \n");
    for (i = 0; i < n; i++)
    {
        printf("enter x :\n");
        scanf("%f", &x[i]);
        printf("enter y :\n");
        scanf("%f", &y[i]);
    }
    printf("enter value of x for whixh y is required");
    scanf("%f", &search);
    for (i = 0; i < n; i++)
    {
        float num = 1, den = 1;
        for (j = 0; j < n; j++)
        {
            if (j != i)
            {

                num = num * (search - x[j]);
                den = den * (x[i] - x[j]);
            }
        }
        printf("%f \n", num / den);

        ans = ans + ((num * y[i]) / den);
        printf("%f \n", ans);
    }

    printf("f[%f] = %f", search, ans);
}

int main()
{
    int num;
    printf("Enter 1 for forward interpolation\nEnter 2 for backward interpolation\nEnter 3 for lagrange's method\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        forwardinterpolation();
        break;

    case 2:
        backwardinterpolation();
        break;

    case 3:
        lagrange();
        break;

    default:
        printf("Wrong input\n");
        break;
    }
    return 0;
}