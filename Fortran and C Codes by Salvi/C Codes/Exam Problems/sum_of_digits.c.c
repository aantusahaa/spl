#include<stdio.h>
int main(){
int i,digit,sum=0,rem;

printf("Find sum of the digits:");
scanf("%d",&digit);
for(i=1;i<=digit;i++)
{
    rem=digit%10;
    sum=sum+rem;
    digit=digit/10;
}
printf("Sum of the digits:%d",sum);
return 0;
}
