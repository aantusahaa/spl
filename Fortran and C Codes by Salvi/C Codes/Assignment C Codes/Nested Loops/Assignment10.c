#include<stdio.h>

//Perfect Number
int main()
{
int n,i,divsum;
divsum=0;
    printf("Check if your number is a Perfect Number:\n");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
            divsum=divsum+i;
    }

    if(divsum==n)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not Perfect Number");
    }
return 0;
}
