#include<stdio.h>

int main(){
    int i,j,k,count=0,prime=0,num,n;

    printf("How many Numbers?\n");
    scanf("%d",&n);

    printf("What are the Numbers?\n");
    for(i=1;i<=n;i++){
        scanf("%d",&num);
        for(j=1;j<=num;j++){
            if(num%j==0){
                count++;
            }
            if(count==2){
            prime++;
            }
        }
        count=0;//Setting counter to 0 again
    }
        
    printf("There are %d prime numbers in between",prime);

return 0;
}