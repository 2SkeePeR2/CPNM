#include<stdio.h>
#include<string.h>
#define MAX 200

int main(){
    char str[MAX];
    char res[10];
    printf("Enter the string\n");
    scanf("%[^\n]", &str);
    int i = 0, resi = 0;
    while(str[i+1]!='\0'){
        int chr = (int)(str[i-1]);
        if(i==0||chr==32){
            res[resi] = str[i];
            resi++;
        }
        i++;
    }

    printf("%s",res);

    return 0;
}