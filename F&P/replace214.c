#include<stdio.h>

int main(){
    char str[1000];
    printf("Enter the string.\n");
    scanf("%[^\n]",&str);
    int i =0;
    while(str[i+1]!='\0'){
        int chr = (int)(str[i]);
        if(chr==32){
            str[i] = '|';
        }
        i++;
    }
    printf("%s",str);
    return 0;
}