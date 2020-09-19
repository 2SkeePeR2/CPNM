#include<stdio.h>

void reverse(int arr[],int sz){
    int i;
    for(i=0;i<sz/2;i++){
        int temp = arr[i];
        arr[i] = arr[sz-i-1];
        arr[sz-i-1] = temp;
    }
}

int main(){
    int len;
    printf("Enter the size of the array: ");
    scanf("%d",&len);
    int arr[len];
    printf("Enter the numbers in the array\n");
    int i,j;
    for(i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,len);
    printf("The reversed array is: \n");
    for(j=0;j<len;j++){
        printf("%d ", arr[j]);
    }
    return 0;
}