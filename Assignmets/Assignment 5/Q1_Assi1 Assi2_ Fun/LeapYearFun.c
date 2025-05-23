void leapyear();
void main()
{
    leapyear();
}
void leapyear()
{
    int year = 2005;

    if (year%4==0 && year%100==0 && year%400==0)
    {
        printf("Year is Leap Year");
    }
    else{
        printf("Year is Not Leap Year");
    }
}