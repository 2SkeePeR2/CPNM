#include<stdio.h>
#include<stdlib.h>
#define LEN 1000

int main(){
    int num;
    FILE *fptr;
    fptr = fopen("C:\\program.txt", "w");
    if(fptr == NULL){
        printf("Error!");
        return 1;
    }
    printf("Please enter the number: ");
    scanf("%d", &num);

    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
}