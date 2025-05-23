#include <stdio.h>

void sumOfArrays(int arr[], int brr[], int crr[], int n);
void main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5] = {10, 20, 30, 40, 50};
    int crr[5];
    sumOfArrays(arr, brr, crr, 5);
}

void sumOfArrays(int arr[], int brr[], int crr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        crr[i] = arr[i] + brr[i];

    printf("Sum of arrays: ");
    for(i = 0; i < n; i++)
        printf("%d ", crr[i]);
    printf("\n");
}

