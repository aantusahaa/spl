#include <stdio.h>
#include <math.h>

int main() 
{
    int i,limit,mult;
    printf("Enter the number \n");
    scanf("%d",&limit);

    for(i=1;i<=10;i++)
    {
        mult=limit*i;
        printf("%d * %d = %d\n",limit,i,mult);
    }

    return 0;
}