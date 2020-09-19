#include<stdio.h>

int main(){
    int num,op = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num!=1){
        if(num%2==0){
            num = num/2;
        }
        else{
            num = (num*3)+1;
        }
        op++;
    }
    printf("The number of operations are %d", op);
    return 0;
}