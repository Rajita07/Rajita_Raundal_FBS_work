// 4.check strong number in the given range 1 to n.

void main() {
    int n, i, temp, digit, fact, sum, j;

    printf("Enter range (n): ");
    scanf("%d", &n);

    printf("Strong numbers between 1 and %d are:\n", n);

    for (i = 1; i <= n; i++) {
        temp = i;
        sum = 0;

        while (temp != 0) {
            digit = temp % 10;

            
            fact = 1;
            for (j = 1; j <= digit; j++) {
                fact *= j;
            }

            sum += fact;
            temp /= 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
