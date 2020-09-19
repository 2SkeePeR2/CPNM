#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define SIZE 1001

void findPrimes(){
    bool arr[1001];
    memset(arr, true, SIZE);
    int i,j;
    for(i=2;i*i<SIZE;i++){
        if(arr[i]==true){
            for(j=i*i;j<SIZE;j+=i){
                arr[j] = false;
            }
        }
    }

    int k=2,count = 0;
    while(count<100){
        if(arr[k]==true){
            printf("%d\t", k);
            count++;
        }
        k++;
    }
}

void main(){
    int num ;
    printf("First 100 prime numbers are: \n");
    findPrimes();
}