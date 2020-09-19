#include<stdio.h>

int main(){
    float avg;
    int arr[3],i;
    printf("Enter the 3 numbers\n");
    for(i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    int j;
    int sum = 0;
    for(j=0;j<3;j++){
        sum+=arr[j];
    }
    avg = sum/3;
    int great[3], less[3];
    int k=0,l=0,z;
    for(z=0;z<3;z++){
        if(arr[z]>avg){
            great[k] = arr[z];
            k++;
        }
        else{
            less[l] = arr[z];
            l++;
        }
    }
    int a,b;
    printf("Numbers greater than average are ");
    for(a=0;a<k;a++){
        printf("%d ", great[a]);
    }
    printf(" and numbers lesser than or equal to average are ");
    for(b=0;b<l;b++){
        printf("%d ", less[b]);
    }
    return 0;

}