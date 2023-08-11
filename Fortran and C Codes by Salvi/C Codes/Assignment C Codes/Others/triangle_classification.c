#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    switch (a == b && b == c) {
        
        case 1:
            printf("The triangle is an Equilateral triangle\n");
            break;
            
        case 0:
            
            switch(a==b||a==c||b==c){
                
            case 1:
                printf("The triangle is an Isoceles Triangle");
                break;
            case 0:
                printf("The triangle is a Scalene Triangle");
                break;
            }
    }

    return 0;
}