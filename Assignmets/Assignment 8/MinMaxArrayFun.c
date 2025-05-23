#include <stdio.h>

void findMinMax(int arr[], int n);
void main() 
{
    int arr[] = {5, 3, 9, 1, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    findMinMax(arr, n);
}

void findMinMax(int arr[], int n) 
{
    int i, min, max;
    min = max = arr[0];
    for(i = 1; i < n; i++) 
    {
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
}
