#include<stdio.h>
#define SIZE 1000

int main(){
    char str[SIZE];
    printf("Enter the string.\n");
    scanf("%[^n]", &str);
    int count = 0,i = 0;
    while(str[i+1]!='\0'){
        int chr = (int)(str[i]);
        if((chr>=65&&chr<=90)||(chr>=97&&chr<=122)){
            count++;
        }
        i++;
    }
    printf("%d", count);
    return 0;
}