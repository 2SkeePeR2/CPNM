#include<stdio.h>
#include<stdbool.h>

bool isEven(int x){
    if(x%2==0){
        return true;
    }
    return false;
}

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    bool even = isEven(num);
    if(even){
        printf("The number is even\n");
    }
    else{
        printf("The number is odd\n");
    }
    return 0;
}