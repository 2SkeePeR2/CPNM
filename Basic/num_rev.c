#include<stdio.h>

int rvs(int num){
    int res = 0;
    while(num){
        res = res*10;
        res += num%10;
        num = num/10;
    }
    return res;
}

int main(){
    int num;
    printf("Enter the number.\n");
    scanf("%d",&num);
    int rv = rvs(num);
    printf("%d",rv);
    return 0;
}