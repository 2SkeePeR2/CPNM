#include<stdio.h>
#define LEN 100

struct student
{
    int roll;
    char name[LEN];
    char dept[LEN];
    char course[LEN];
    int yj;
};

void findYear(struct student arr[], int x){
    int year,i;
    printf("Enter the year to search: ");
    scanf("%d", &year);
    for(i=0;i<x;i++){
        if(arr[i].yj==year){
            printf("%s\n",arr[i].name);
        }
    }
}

void findDetails(struct student arr[], int x){
    int rl,i;
    printf("Enter the roll number: ");
    scanf("%d",&rl);

    for(i=0;i<x;i++){
        if(arr[i].roll==rl){
            printf("Roll number: %d\n", arr[i].roll);
            printf("Name: %s\n",arr[i].name);
            printf("Department: %s\n", arr[i].dept);
            printf("Course: %s\n",arr[i].course);
            printf("Year of joining: %d\n", arr[i].yj);
            break;
        }
    }
}

int main(){
    struct student arr[LEN];
    int i=0,flag = 1, slct;
    while(flag){
        printf("Please Enter Student details:\n");
        printf("Roll number:\n");
        scanf("%d",&arr[i].roll);
        printf("Name:\n");
        scanf("%s",&arr[i].name);
        printf("Dept:\n");
        scanf("%s",&arr[i].dept);
        printf("Course:\n");
        scanf("%s",&arr[i].course);
        printf("Year of joining:\n");
        scanf("%d",&arr[i].yj);
        i++;
        printf("To continue press 1 or press 0 to break:\n");
        scanf("%d",&flag);
    }
    printf("Press 1 for finding students with particular joining year\n");
    printf("Press 2 for finding student with particular roll number\n");
    scanf("%d",&slct);
    
    if(slct==1){
        findYear(arr,i);
    }
    else if(slct==2){
        findDetails(arr,i);
    }
    
    return 0;
}