#include <stdio.h>

void fibonacciFun(int *n);
void main() 
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    fibonacciFun(&n);
}


void fibonacciFun(int *n) {
    int a = 0, b = 1, next, i;
    printf("Fibonacci series up to %d terms:\n", *n);
    for (i = 1; i <= *n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}
