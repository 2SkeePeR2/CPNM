#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

struct node
{
    int data;
    struct node *next;
};
typedef struct node node;

node *top;

void initialize()
{
    top = NULL;
}

void push(int value)
{
    node *tmp;
    tmp = malloc(sizeof(node));
    tmp -> data = value;
    tmp -> next = top;
    top = tmp;
}

int pop()
{
    node *tmp;
    int n;
    tmp = top;
    n = tmp->data;
    top = top->next;
    free(tmp);
    return n;
}

int Top()
{
    return top->data;
}

int isempty()
{
    return top==NULL;
}

void display(node *head)
{
    if(head == NULL)
    {
        printf("NULL\n");
    }
    else
    {
        printf("%d\n", head -> data);
        display(head->next);
    }
}


int main() {
    initialize();
    int flag = 1,num;
    while(flag){
        printf("Enter the numbers:\n");
        scanf("%d",&num);
        push(num);
        printf("If you want to continue press 1 or else press 0\n");
        scanf("%d",&flag);
    }
    printf("The stack looks like: \n");
    display(top);
    int popf = 0;
    printf("Would you like to pop elements? If yes press 1\n");
    scanf("%d",&popf);
    while(popf){
        if(!isempty()){
            pop();
        }
        else{
            printf("No elements left to pop\n");
            break;
        }
        printf("To continue press 1 or else press 0\n");
        scanf("%d",&popf);
    }
    printf("the stack now loosk like:")
    display(top);
	return 0; 
} 

