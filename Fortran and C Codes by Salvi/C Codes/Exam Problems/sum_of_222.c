#include<stdio.h>
#include<math.h>

int main(){
    int i,n,t,t1=0,sum=0;

    printf("How many terms?\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        t=2*pow(10,i)+t1;
        printf("%d ",t);

        if(i<n-1)
        printf("+");
        
        sum=sum+t;
        t1=t;
    }
    printf("\nThe sum is: %d",sum);

    return 0;
}