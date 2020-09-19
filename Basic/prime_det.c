#include<stdio.h>
// #include<string.h>

int pdect(int num){
    int i;
    for(i=2;i<num;i++){
        if(num%i==0){
            printf("NO");
            return 1;
        }
    }
    printf("YES");
    return 0;
}

int main(){
    int num;
    printf("Enter the number.\n");
    scanf("%d",&num);
    int vr = pdect(num);
    return 0;
}