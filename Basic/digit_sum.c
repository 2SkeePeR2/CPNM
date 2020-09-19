#include <stdio.h>

int dsum(int num){
    int sum = 0;
    while(num){
        sum += num%10;
        num = num/10;
    }
    return sum;
}

int main(){
    int num;
    printf("Enter the number.\n");
    scanf("%d", &num);
    int sm = dsum(num);
    printf("%d",sm);
    return 0;
}