
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float y(float x)
{
    return 1/(1+x*x);
}

float trapezoidal(float a, float b, float n)
{

    float h = (b-a)/n;


    float s = y(a)+y(b);


    for (int i = 1; i < n; i++)
        s += 2*y(a+i*h);


    return (h/2)*s;
}


float func(float x)
{
    return log(x);
}


float simpsons_(float ll, float ul, int n)
{

    float h = (ul - ll) / n;


    float x[10], fx[10];


    for (int i = 0; i <= n; i++) {
        x[i] = ll + i * h;
        fx[i] = func(x[i]);
    }

    float res = 0;
    for (int i = 0; i <= n; i++) {
        if (i == 0 || i == n)
            res += fx[i];
        else if (i % 2 != 0)
            res += 4 * fx[i];
        else
            res += 2 * fx[i];
    }
    res = res * (h / 3);
    return res;
}

int main()
{

    float x0,xn;
    int n,ch;

    printf("Enter the lower and upper limits:\n");
    scanf("%f %f",&x0,&xn);

    printf("Enter 1 for Trapezoidal rule and 2 for Simpsons rule\n");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        {
            printf("Enter number of grids\n");
            scanf("%d",&n);
              printf("Value of integral is %6.4f\n",
                  trapezoidal(x0, xn, n));
            break;
        }

        case 2:
        {
            printf("Enter number of grids\n");
            scanf("%d",&n);
              printf("Value of integral is %6.4f\n",
                  simpsons_(x0, xn, n));
            break;
        }
        default:
        {
            printf("Wrong input\n");
        }
    }


    return 0;
}
