#include<stdio.h>
#include<stdbool.h>

void sorting(int arr[], int size){
    int i;
    bool sorted = false;
    for (i=0; i<size-1; i++){
        if(arr[i+1]<arr[i]){
            arr[i] = arr[i]+arr[i+1];
            arr[i+1] = arr[i]-arr[i+1];
            arr[i] = arr[i]-arr[i+1];
            sorted = true;
        }
    }
    
    if(sorted){
        sorted = false;
        sorting(arr, size);
    }
}

void main(){
    int size, i, j;

    printf("Assign the size of the array.\n");
    scanf("%d",&size);
    
    int arr[size];
    printf("Please assign the elements of the array.\n");
    for(i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    printf("You have assigned the elemets of the array.\n");
    
    sorting(arr, size);

    printf("The sorted array is:\n");
    for(j=0;j<size;j++){
        printf("%d\t",arr[j]);
    }
}