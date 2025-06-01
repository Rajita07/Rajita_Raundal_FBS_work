#include <stdio.h>
void main()
{
    int Sub1=60, Sub2=70, Sub3=80, Sub4=40, Sub5=50;
    float T;
    float P;                           //T=Total marks, P=percentage
    T = Sub1 + Sub2 + Sub3 + Sub4 + Sub5; 
    P = (T / 500) * 100;                  //500 is the total marks of all subjects
    printf("Total Marks = %f\n", T);     
    printf("Percentage = %f\n", P);       
}