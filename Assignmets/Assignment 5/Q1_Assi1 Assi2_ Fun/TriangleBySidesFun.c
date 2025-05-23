void triangle();
void main()
{
    triangle();
}
void triangle() {
    int Side1, Side2, Side3;
    printf("Enter length of first side: ");
    scanf("%d", &Side1);

    printf("Enter length of second side: ");
    scanf("%d", &Side2);

    printf("Enter length of third side: ");
    scanf("%d", &Side3);

    if(Side1 == Side2 && Side2 == Side3) {
        printf("The triangle is equilateral.\n");
    } else if (Side1 == Side2 || Side2 == Side3 || Side1 == Side3) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is scalene.\n");
    }
}