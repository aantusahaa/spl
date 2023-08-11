#include<stdio.h>
#include<string.h>

int strlength(char *s){

    int i=0,length=0;

    while(s[i]!='\0'){
        length++;
        i++;
    }
    return length;
}

int main()
{
    int length;
    char s[30];
    printf("What is the string?\n");
    gets(s);

    length=strlength(s);

    printf("Length is %d",length);

    return 0;
}