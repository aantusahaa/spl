#include<stdio.h>
#include<math.h>
int main(){

int t,i,n,sum;
printf("How many terms of the series?\n");
scanf("%d",&n);
    t=0;
    sum=0;
    for(i=0;i<n;i++)
    {
        t=pow(10,i)+t;
        sum=sum+t;
        printf("%d\n",t);
    }

    printf("Sum of the series is %d",sum);

    return 0;
}