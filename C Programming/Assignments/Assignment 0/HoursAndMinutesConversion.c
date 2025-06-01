#include<stdio.h>
void main()
{
    int a, hr, rm;
    a=125;

    hr = a / 60;
    rm = a % 60;

    printf("Given number = %d\n", a);
    printf("Hours = %d\n", hr);
    printf("Remaining Minutes = %d\n", rm);
}