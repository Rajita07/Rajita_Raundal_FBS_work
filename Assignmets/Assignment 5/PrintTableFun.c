void table();
void main() 
{
    table();
}void table() {

    int num, i = 1;

    printf("Enter a number to print its table: ");
    scanf("%d", &num);

    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
}