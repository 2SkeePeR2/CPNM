#include<stdio.h>
#define SIZE 100

int main(){
    char str[SIZE];
    int i,len;
    printf("Enter the length of the string.\n");
    scanf("%d",&len);
    printf("Enter the string.\n");
    scanf("%s",&str);
    for(i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            printf("NO");
            return 1;
        }
    }
    printf("YES");
    return 0;
}