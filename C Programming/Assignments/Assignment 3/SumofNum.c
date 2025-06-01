// 3. Calculate sum of numbers in the given range.

//Using While Loop
void main() {
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


// Using For Loop
// void main()
// {
//     int start, end, sum = 0;

//     printf("Enter start of range: ");
//     scanf("%d", &start);

//     printf("Enter end of range: ");
//     scanf("%d", &end);

//     for (int i = start; i <= end; i++) {
//         sum += i;
//     }

//     printf("Sum from %d to %d is: %d\n", start, end, sum);
// }
