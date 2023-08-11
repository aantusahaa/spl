#include<stdio.h>
#include<math.h>

int main(){

    int i,n,t=0,sum=0;
    printf("How many terms?\n");
    scanf("%d",&n);

    printf("The series is:");
    for(i=0;i<n;i++)
    {
        t=(10*t)+3;
        printf("%d",t);
        if(i<n-1)
        printf("+");
        sum=sum+t;
    }
   printf("\nThe sum is: %d",sum);

    return 0;
}
