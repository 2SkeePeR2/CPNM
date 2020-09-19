#include<stdio.h>
#include<stdbool.h>

bool leap(int year){
    if(year%400==0||(year%100!=0&&year%4==0)){
        return true;
    }
    return false;
}

int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    bool isLeap = leap(year);
    if(isLeap){
        printf("It's a leap year\n");
    }
    else{
        printf("It's not a leap year\n");
    }
    return 0;
}