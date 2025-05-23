// 5.Print fibonacci series?(optional)

void main() {
    int n, a = 0, b = 1, next, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}
