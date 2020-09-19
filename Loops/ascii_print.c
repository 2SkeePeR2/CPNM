#include<stdio.h>

int main(){
    int i;
    for(i=0;i<256;i++){
        printf("The ascii value is %d. The character is %c\n", i, (char)i);
    }
    return 0;
}