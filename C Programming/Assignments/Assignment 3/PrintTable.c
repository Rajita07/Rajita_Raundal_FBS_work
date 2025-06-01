// 2. Print table for the given number. 



// Using While Loop
void main() {
    int num, i = 1;

    printf("Enter a number to print its table: ");
    scanf("%d", &num);

    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
}


// Using For Loop
// void main() {
//     int num, i;

//     printf("Enter a number to print its table: ");
//     scanf("%d", &num);

//     for (i = 1; i <= 10; i++) {
//         printf("%d x %d = %d\n", num, i, num * i);
//     }
// }