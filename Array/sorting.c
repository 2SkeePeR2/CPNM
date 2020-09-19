#include <stdio.h>
#include <stdbool.h>

void sorting(int arr[])
{
    int i;
    bool changed = false;
    for (i = 0; i < 9; i++)
    {
        int temp;
        if (arr[i + 1] < arr[i])
        {
            arr[i] = arr[i] + arr[i + 1];
            arr[i + 1] = arr[i] - arr[i + 1];
            arr[i] = arr[i] - arr[i + 1];
            changed = true;
        }
    }

    if (changed)
    {
        changed = false;
        sorting(arr);
    }
}

void main()
{
    int i;

    int arr[10];
    printf("Please assign the 10 elements of the array.\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("You have assigned the elemets of the array.\n");

    sorting(arr);

    printf("the sorted array is: \n");
    int j;
    for (j = 0; j < 10; j++)
    {
        printf("%d ", arr[j]);
    }
}