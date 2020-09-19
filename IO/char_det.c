#include<stdio.h>

int main(){
    char c;
    printf("Enter the character: ");
    scanf("%c", &c);
    if((int)(c)>=65&&(int)(c)<=90){
        printf("Upper case letter\n");
    }
    else if((int)(c)>=97&&(int)(c)<=122){
        printf("Small case letter\n");
    }
    else{
        printf("Special character\n");
    }
}