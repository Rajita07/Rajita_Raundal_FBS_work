#include <stdio.h>

// Function: With parameter, without return type

void perfectNumRange(int n);
void main()
{
    int n;
    printf("Enter range (n): ");
    scanf("%d", &n);
    perfectNumRange(n);
}

void perfectNumRange(int n) {
    int i, j, sum;
    printf("Perfect numbers between 1 and %d are:\n", n);
    for (i = 1; i <= n; i++) {
        sum = 0;
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

