#include<stdio.h>

int main(){
    int arr[3],i,num;
    printf("Enter the 100 numbers\n");
    for(i=0;i<100;i++){
        scanf("%d",&num);
        if(num<0){
            arr[0]++;
        }
        else if(num==0){
            arr[1]++;
        }
        else{
            arr[2]++;
        }
    }
    printf("The input has %d zeros, %d negative digits and %d positive digits\n", arr[1], arr[0], arr[2]);
    return 0;
}