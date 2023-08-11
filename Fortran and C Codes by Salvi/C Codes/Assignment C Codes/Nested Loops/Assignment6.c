#include<stdio.h>
//Sum of squares of natural even numbers

int main(){
    int i,num,sum;
    sum=0;

    printf("Up to which even number?:");
    scanf("%d",&num);
    for (i=2;i<=num;i=i+2){
        printf("%d ",i*i);
        sum=sum+i*i;
    }

    printf("\nThe sum is: %d ",sum);

    return 0;
}
