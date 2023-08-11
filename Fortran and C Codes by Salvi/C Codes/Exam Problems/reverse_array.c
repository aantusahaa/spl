#include<stdio.h>
//Reversing an array
int main(){
int i,j;
int arr1[5],arr2[5];

printf("What is the array?\n");
for(i=0;i<5;i++){
    scanf("%d",&arr1[i]);
}

for (i=0;i<5;i++){
    arr2[i]=arr1[4-i];
}

printf("The reversed array is:\n");
for(i=0;i<5;i++){
    printf("%d ",arr2[i]);
}

    return 0;
}