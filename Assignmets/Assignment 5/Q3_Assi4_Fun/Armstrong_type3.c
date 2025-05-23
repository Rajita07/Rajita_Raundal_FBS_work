#include <stdio.h>

// Function: With parameter, without return type

void ArmstrongInRange(int n);
void main() 
{
    int n;
    printf("Enter the range: ");
    scanf("%d", &n);

    ArmstrongInRange(n);
}

void ArmstrongInRange(int n) {
    int i, j, sum, r, count = 0;

    printf("Armstrong numbers between 1 and %d are: ", n);

    for (i = 1; i <= n; i++) {
        sum = 0;
        j = i;

        while (j != 0) {
            r = j % 10;
            sum += r * r * r;
            j /= 10;
        }

        if (sum == i) {
            printf("%d ", i);
            count++;
        }
    }

    if (count == 0) {
        printf("No Armstrong numbers found in the given range.");
    }

    printf("\n");
}
