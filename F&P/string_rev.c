#include<stdio.h>
#define MAX 1000

int main(){
    int len,i;
    char str[MAX];
    printf("Enter the length of the word.\n");
    scanf("%d",&len);
    printf("Enter the string.\n");
    scanf("%s",&str);
    for(i=0;i<len/2;i++){
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
    printf("%s",str);
    return 0;
}