// 3. Write a program to find greatest of three numbers using nested if-else. 

void main()
{
    int num1, num2, num3;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    if (num1 >= num2) {
        if (num1 >= num3) {
            printf("Greatest number is: %d\n", num1);
        } else {
            printf("Greatest number is: %d\n", num3);
        }
    } else {
        if (num2 >= num3) {
            printf("Greatest number is: %d\n", num2);
        } else {
            printf("Greatest number is: %d\n", num3);
        }
    }
}