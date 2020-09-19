#include<stdio.h>

int main(){
    int sal;
    printf("Enter the basic salary: ");
    scanf("%d",&sal);
    printf("Dearness allowance is %.2f\n", 0.6*sal);
    printf("House rent allowance is %.2f\n", 0.15*sal);
    printf("Gross salary is %.2f", sal+(0.6*sal)+(0.15*sal));
    return 0;
}