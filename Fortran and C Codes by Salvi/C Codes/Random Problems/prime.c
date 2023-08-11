#include<stdio.h>
#include<math.h>
//A Simple Program to detect prime number

int main()
{
    int n,i,countdiv=0;

    printf("Enter the number for which you want to check if it's prime or not\n");
    scanf("%d",&n);

    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)      
        countdiv++;
    }

    if(countdiv==2)
    {
    printf("Entered number %d is prime",n);
    }
    else
    {
    printf("Entered number %d is not prime",n);
    }

    return 0;
}