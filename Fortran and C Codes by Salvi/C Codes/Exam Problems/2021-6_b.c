#include<stdio.h> 
#include<string.h>
int main(){
    int i,length;
    char str1[40],str2[40];
    printf("What is the string you want to check?\n");
    scanf("%s",str1);

    length=strlen(str1);
    
    for(i=0;i<strlen(str1);i++){
        str2[i]=str1[(length-1)-i];
    }
        str2[i]='\0';

    if(strcmp(str1,str2)==0){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome\n");
    }

    return 0;
}