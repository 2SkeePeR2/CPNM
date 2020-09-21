#include<stdio.h>
#include<math.h>
#define ep  1.0e-5
float func(float arr[], int d, float x)
{
    double sum=0;
    for(int i=0; i<d;i++)
        sum += arr[i]*pow(x,i);
    return sum;
}
float derive(float x, float arr[], int d)
{
    float a= x-ep, b= x+ep;
    float fa = func(arr, d, a);
    float fb = func(arr, d, b);
    float ans = (fa-fb)/(a-b);
    return ans;
}
float x1(float arr[], int d, float x)
{
    return x- func(arr, d, x)/derive(x, arr, d);
}
float absolute(float a, float b)
{
    float x = a-b;
    if(x<0)
        x=b-a;
    return x;
}


int main()
{
    printf("Enter the degree polynomial you want to solve with x as the variable:\n");
    int d;
    scanf("%d", &d);
    d++;
    printf("Enter the coefficients of the polynomial one by one: \n");
    float arr[d],  x;
    for (int i=0; i<d;i++)
    { printf("Enter coefficient of x^%d \n", i);
        scanf("%f", &arr[i]);
    }
    printf("Enter how you want to solve the equation:\n1. False Position Method\n2. Bisection Method\n3. Newton Ralphson Method ");
    int hi;
    scanf("%d", &hi);
    if(hi==1)
    {
    printf("Enter the start and end of the interval for the root:\n");
    float st, en;
    scanf("%f%f", &st, &en);
    if(func(arr, d, st)*func(arr, d, en)>0)
    {
        printf("Wrong interval");
        return 0;
    }
         float x1;
           x = st;
               do{
            x1 = x;
            x = (st*func(arr, d, en)-en*func(arr, d, st))/(func(arr, d, en)-func(arr, d, st));
            if(func(arr, d, st)*func(arr, d, x)<0)
                en = x;

            else
                st = x;
        } while(absolute(x, x1) >ep);

        printf("%f", st);
        return 0;
    }
    if(hi==2)
    {
    printf("Enter the start and end of the interval for the root:\n");
    float st, en;
    scanf("%f%f", &st, &en);
    if(func(arr, d, st)*func(arr, d, en)>0)
    {
        printf("Wrong interval");
        return 0;
    }

        while(absolute(st, en)>ep)
        {
            float mid= (st+en)/2;
            if(func(arr, d, st)*func(arr, d, mid)<0)
                en = mid;
            else
                st = mid;
        }
        printf("%f", st);
        return 0;
    }
    if(hi ==3)
    {
    printf("Enter the starting point(a value close to the solution):");
    scanf("%f", &x);
    while(absolute(x, x1(arr, d, x))>ep)
    {
        x = x1(arr, d, x);
    }
         printf("%f\n", x);
    return 0;
    }
}
