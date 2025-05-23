#include <stdio.h>
void main() 
{
    int arr[] = {4, 7, 2, 9, 5}, i, key = 9;
    int found = 0, n = 5;

    for(i = 0; i < n; i++) 
    {
        if(arr[i] == key) {
            printf("Element %d found at index %d\n", key, i);
            found = 1;
            break;
        }
    }

    if(!found) printf("Element not found\n");

}
