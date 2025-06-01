// 1.Print armstrong number in the the given range 1 to n.

void main() {
    int n, i, j, sum, r, count = 0;
    printf("Enter the range: ");
    scanf("%d", &n);
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
}