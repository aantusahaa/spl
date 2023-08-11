#include<stdio.h>

double cube(double num)
{
    double result=num*num*num;
    return result;
}

int main ()
{

printf("Answer is: %f",cube(7.0));
    return 0;
}