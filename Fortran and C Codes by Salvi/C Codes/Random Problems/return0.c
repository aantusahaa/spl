#include<stdio.h>

float cube(float num)
{
    float result= num*num*num;
    return result;
}



int main()
{
    
    printf("The cube of the given number is: %f",cube(3.0));

    return 0;

}