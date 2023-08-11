#include<stdio.h>

int main()
{
    sayHi("Mike",30);
    sayHi("Rob",20);
    sayHi("Tom",25);
    
    return 0;   
}

void sayHi(char name[20],int age)
{
    printf("Hello %s, you are %d years old\n",name,age);
}