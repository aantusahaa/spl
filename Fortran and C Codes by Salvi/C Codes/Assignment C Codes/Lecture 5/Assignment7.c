#include<stdio.h>
int main(){
    char word;

    printf("Input the character:");
    scanf("%c",&word);

    if((word>='a'&&word<='z')||(word>='A'&&word<='Z')){
        printf("Alphabet");
    }
    else if(word>='0'&&word<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }

    return 0;
}
