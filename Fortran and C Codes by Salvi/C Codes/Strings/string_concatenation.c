#include<stdio.h>

int main(){
    int i,j;
    char str1[6]="hello",str2[6]="world",str[20];
    for(i=0;i<5;i++){
        str[i]=str1[i];
    }
    for(j=0;j<6;j++){
        str[i+j]=str2[j];
    }
    printf("%s",str);
    
    return 0;
}