#include<stdio.h>

int main(){
    int num,sum=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    int i = 1;
    while(i<num+1){
        sum+=i;
        i++;
    }
    printf("The sum is %d", sum);
    return 0;
}