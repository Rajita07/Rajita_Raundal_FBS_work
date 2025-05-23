void Sum();
void main() 
{
    Sum();
}
void Sum() {
    int start, end, sum = 0;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    int i = start;
    while (i <= end) {
        sum += i;
        i++;
    }

    printf("Sum from %d to %d is: %d\n", start, end, sum);

}