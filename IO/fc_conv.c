#include<stdio.h>

int main(){
    float temp;
    printf("Enter the temperature in F:\n");
    scanf("%f", &temp);
    float ctemp = (temp-32)*5/9;
    printf("The temperature is %.2f C\n",ctemp);
    return 0;
}