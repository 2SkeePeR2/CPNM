#include<stdio.h>
#include<stdlib.h>
#define LEN 50

int main(){
    char ch, src[LEN], target[LEN];
    FILE *fsource, *ftarget;
    printf("Enter source file path: ");
    gets(src);
    fsource = fopen(src, "r");
    if(fsource == NULL){
        printf("Error!");
        return  1;
    }
    printf("Enter target file path: ");
    gets(target);
    ftarget = fopen(target, "w");
    if(ftarget == NULL){
        printf("Error!");
        return 1;
    }
    while((ch=fgetc(fsource))!=EOF){
        fputc(ch, ftarget);
    }
    fclose(fsource);
    fclose(ftarget);
    printf("File copied successfully\n");
    return 0;
}