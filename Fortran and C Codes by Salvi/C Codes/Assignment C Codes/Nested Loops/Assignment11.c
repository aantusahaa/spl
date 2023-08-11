#include<stdio.h>
//Fibonacci Series
int main(){

    int i,t1=0,t2=1,nt;
    printf("The Fibonacci series is:\n");
    printf("%d\n",t1);
    printf("%d\n",t2);
    for (i=3;i<=10;i++){
        nt=t1+t2;
        t1=t2;
        t2=nt;
        printf("%d\n",t2);
    }
    return 0;
}