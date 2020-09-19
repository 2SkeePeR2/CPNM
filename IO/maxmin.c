#include <stdio.h>
#include <limits.h>

int main(){
    int arr[3];
    printf("Enter first number: ");
    scanf("%d", &arr[0]);
    printf("Enter second number: ");
    scanf("%d", &arr[1]);
    printf("Enter third number: ");
    scanf("%d", &arr[2]);
    int min = INT_MAX, max = INT_MIN,i;
    for(i=0;i<3;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("The maximum number is %d and minimum number is %d\n", max, min);
    return 0;
}