#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,length=0;
    char s[30];
    printf("What is the string?\n");
    gets(s);

    while(s[i]!='\0'){
        if(s[i]!=' ')
        length++;
        i++;
    }
    printf("Length is %d",length);

    return 0;
}