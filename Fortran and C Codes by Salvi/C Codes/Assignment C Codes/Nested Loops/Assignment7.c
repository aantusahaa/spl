#include<stdio.h>
int main(){
    //Even Numbers
    int i,nup,sum;
    printf("Up to how many terms of even numbers:?\n");
    scanf("%d",&nup);
    sum=0;
    for(i=2;i<=nup;i=i+1){
        if(i%2==0)
            sum=sum+i;
    }
    printf("Sum of even numbers up to %d is:%d",nup,sum);

    return 0;
}
