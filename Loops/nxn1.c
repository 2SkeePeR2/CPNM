#include<stdio.h>

int main(){
    int sum = 0,num, i = 1;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(i<=num){
        sum+=(i*(i+1));
        i++;
    }
    printf("The sum of the series if %d", sum);
    return 0;
}