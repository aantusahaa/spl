#include <stdio.h>
//Fibonacci
int main() 
{
    int i,term,t1=0,t2=1,next_term;

    printf("Enter the term number of fibonacci series\n");
    scanf("%d",&term);

    printf("Fibonacci series is: ");

    for(i=1;i<=term;i++)
    {
        printf("%d  ",t1);

        next_term=t1+t2;
        t1=t2;
        t2=next_term;
        
    }
    
    return 0;
}