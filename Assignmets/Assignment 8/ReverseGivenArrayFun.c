#include <stdio.h>

void printreverseArray(int arr[], int n);
void main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    printReverseArray(arr, n);
}
void printReverseArray(int arr[], int n) 
{
    int i;
    printf("Reversed array: ");
    for(i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);
    printf("\n");
}

