void primeRange();
void main() 
{
    primeRange();
}
void primeRange() {
    int n, i, j, count = 0;
    printf("Enter the range: ");
    scanf("%d", &n);
    printf("Prime numbers between 1 and %d are: ", n);
    for (i = 2; i <= n; i++) {
        count = 0;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                count++;
                break;
            }
        }
        if (count == 0) {
            printf("%d\n ", i);
        }
    }
}