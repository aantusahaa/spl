#include<stdio.h>
#include<stdlib.h>

int main()
{

    int age= 30;
    double gpa=3.96;
    char grade='A';
    printf("age's memory address: %p \ngpa's memory address: %p \ngrade's memory address: %p",&age,&gpa,&grade);
    
    return 0;

}