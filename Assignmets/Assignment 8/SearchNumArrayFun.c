#include <stdio.h>


void searchInArray(int arr[], int n, int x);
void main() 
{
    int arr[] = {4, 7, 2, 9, 5}, key = 9, n = 5;
    searchInArray(arr, n, key);
}
void searchInArray(int arr[], int n, int x) 
{
    int i, found = 0;
    for(i = 0; i < n; i++) 
    {
        if(arr[i] == x) {
            printf("Element %d found at index %d\n", x, i);
            found = 1;
            break;
        }
    }
    if(!found) printf("Element not found\n");
}

