#include<stdio.h>

int main(){
    float sum = 0;
    float i=1.0,factorial=1.0,j;
    while(i<8){
        factorial = factorial*i;
        sum+=i/factorial;
        i++;
    }
    printf("%.5f",sum);
    return 0;
}