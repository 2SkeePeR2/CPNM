#include <stdio.h>

int maxNum(int arr[3]){
    int max = -2147483648;
    int i;
    for (i = 0; i < 3; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[3], j;
    printf("enter the numbers.\n")
    for(j=0;j<3;j++){
        scanf("%d", &arr[j]);
    }
    int mx = maxNum(arr);
    printf("%d", mx);
    return 0;
}