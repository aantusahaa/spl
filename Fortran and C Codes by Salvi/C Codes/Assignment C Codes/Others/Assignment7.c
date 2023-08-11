#include <stdio.h>

int main() 
{
    int i,num,sum=0;
    printf("Enter value of odd number: ");
    scanf("%d",&num);
    printf("The odd numbers upto %d are\n",num);
    for(i=1;i<=num;i+=2)
    {
        sum=sum+i;
        printf("%d  ",i);
    }
        printf("\nAnd the result of summation is %d ",sum);
    return 0;
}