#include<stdio.h> 
int main(){
    int marks;
    scanf("%d",&marks);

    switch((marks>79)+(marks>59)+(marks>49)+(marks>39)){
        case 0:printf("Fail");
        break;

        case 1:printf("Third Division");
        break;

        case 2:printf("Second Division");
        break;
        
        case 3:printf("First Division");
        break;
        
        case 4:printf("Honours");
        break;

    }
return 0;
}

