#include <stdio.h>
#include <math.h>

int main() 
{
int i,num,cube;
printf("Enter the value upto which you need cube\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
    cube=pow(i,3);
    printf("The cube of %d is: %d \n",i,cube);
}

return 0;
}
