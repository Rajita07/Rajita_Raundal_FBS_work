#include <stdio.h>

void sortArrayAscending(int arr[], int n);
void main() 
{
    int arr[] = {5, 2, 4, 1, 3};
    int n = 5;
    sortArrayAscending(arr, n);
}

void sortArrayAscending(int arr[], int n)
{
    int i, j, temp;
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) 
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

