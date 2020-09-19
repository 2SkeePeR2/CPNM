#include<stdio.h>

int main(){
    char word[100];
    int count = 0;
    printf("Enter the string\n");
    scanf("%[^\n]",&word);
    while(1){
        if(word[count]!='\0'){
            count++;
        }
        else{
            break;
        }
    }
    printf("%d",count);
    return 0;
}