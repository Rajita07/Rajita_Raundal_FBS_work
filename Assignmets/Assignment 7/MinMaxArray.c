#include <stdio.h>
void main() 
{
    int arr[] = {5, 3, 9, 1, 7}, i, min, max;
    int n = sizeof(arr)/sizeof(arr[0]);

    min = max = arr[0];
    for(i = 1; i < n; i++) 
    {
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
}
