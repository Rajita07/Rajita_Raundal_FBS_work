#include <stdio.h>

void printOddEven(int arr[], int n);
void main() 
{
    int arr[] = {4, 5, 6, 7, 8};
    int n = 5;
    printOddEven(arr, n);
}
void printOddEven(int arr[], int n) 
{
    int i;
    printf("Even numbers: ");
    for(i = 0; i < n; i++)
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);

    printf("\nOdd numbers: ");
    for(i = 0; i < n; i++)
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    printf("\n");
}

