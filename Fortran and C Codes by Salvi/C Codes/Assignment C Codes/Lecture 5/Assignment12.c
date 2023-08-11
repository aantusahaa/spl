#include<stdio.h>

//Grading System (Assignment 12 Lecture 5)
int main(){

char grade;
printf("What is the Grade?\n");
scanf("%c",&grade);

switch(grade){

case 'E':
    printf("Excellent");
    break;
case 'V':
    printf("Very Good");
    break;
case 'G':
    printf("Good");
    break;
case 'A':
    printf("Average");
    break;
case 'F':
    printf("Fail");
    break;
default:
    printf("Invalid Grade");

}

return 0;
}
