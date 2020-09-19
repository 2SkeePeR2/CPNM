#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter the word: ");
    gets(str);
    int sz = strlen(str);
    int i;
    for(i=0;i<sz;i++){
        str[i] = str[i] - 30;
    }
    printf("The resultant word is: ");
    puts(str);
}