#include<stdio.h>

int main(){
    int i = 0, count = 0;
    char str[1000];
    printf("Enter the string.\n");
    scanf("%[^n]", &str);
    while(str[i+2]!='\0'){
        char ft = str[i];
        char sc = str[i+1];
        if((ft=='a'||ft=='e'||ft=='i'||ft=='o'||ft=='u')&&(sc=='a'||sc=='e'||sc=='i'||sc=='o'||sc=='u')){
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}