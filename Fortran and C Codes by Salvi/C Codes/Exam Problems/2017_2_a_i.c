#include<stdio.h>
void main(void){
    int i,j;
    int s=0;
    for (i=1;i<5;i++)
        for(j=1;j<i+1;j++)
        {
            s+=(i*i-i*j+1);
            printf("%d\n",s);
            break;
        }
        printf("\nFinal s=%d",s);
}