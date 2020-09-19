#include<stdio.h>

void swap(int *a, int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x,y;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter the second number: ");
    scanf("%d",&y);
    swap(&x,&y);
    printf("After swapping first number is %d and second number is %d\n", x,y);
    return 0;
}