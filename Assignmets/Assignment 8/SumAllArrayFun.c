#include <stdio.h>

void sumArray(int arr[], int n);
void main()
{
    int arr[] = {3, 6, 1, 8, 4};
    int n = 5;
    sumArray(arr, n);
}
void sumArray(int arr[], int n)
{
    int sum = 0, i;
    for(i = 0; i < n; i++)
        sum += arr[i];
    printf("Sum = %d\n", sum);
}

