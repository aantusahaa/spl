#include<stdio.h>
#include <string.h>

int main(){
    int i,j;
    char str1[6]="hello",str2[6]="world",str[20];

    for(i=0;str1[i]!='\0';i++){
        str[i]=str1[i];
    }
    for(j=0;str2[j]!='\0';j++){
        str[i+j]=str2[j];
    }
    str[i+j]='\0';
    printf("%s\n",str);//without library function
    printf("%s",strcat(str1,str2));//Same thing with library function
    
    return 0;
}