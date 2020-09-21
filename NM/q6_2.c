#include<stdio.h> 
#include<stdlib.h>
#include<math.h>
float ans1,ans2;

float func(float x, float y) 
{ 
    return (x * x + y*y); 
} 
  

void euler(float x0, float y, float h, float x) 
{ 
    float temp = -0; 
  

    while (x0 < x) { 
        temp = y; 
        y = y + h * func(x0, y); 
        x0 = x0 + h; 
    } 
  
    printf("Solution for Euler's method at x = 1 is %f\n",y);
    ans1=y;
} 
  
float rungeKutta(float x0, float y0, 
                 float h, float x) 
{ 
    
    int n = (int)((x - x0) / h); 
  
    float k1, k2; 
  
    
    float y = y0; 
    for (int i = 1; i <= n; i++) { 
     
        k1 = h * func(x0, y); 
        k2 = h * func(x0 + 0.5 * h, 
                      y + 0.5 * k1); 
  
        y = y + (1.0 / 6.0) * (k1 + 2 * k2); 
  
       
        x0 = x0 + h; 
    } 
  
    printf("Solution for Runge Kutta method at x=1 is %f\n",y);
    ans2=y;
} 

int main() 
{ 
    
    float x0 = 0; 
    float y0 = 0.5; 
    float h = 0.025; 
  
    float x = 1; 
  
    euler(x0, y0, h, x); 
    rungeKutta(x0,y0,h,x);
    
    printf("The difference between the 2 methods answers are by %f",(ans1-ans2));
    
    return 0; 
} 