#include<stdio.h>
#include<string.h>
int main(){
int i,l;
char c;
char s1[50],s2[50];

printf("Input the string\n");
gets(s1);

l=strlen(s1);
for(i=0;i<l;i++){
    s2[l-1-i]=s1[i];
}
s2[l]='\0';

printf("The reversed string is : \n");
puts(s2);

    if(strcmp(s1,s2)==0){
        printf("Palindrome");
    }
    else
        printf("Not palindrome");

return 0;
}