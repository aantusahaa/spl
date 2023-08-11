#include <stdio.h>

int main() {
    int num = 1;
    int sum = 0;
    
    while(num <= 100) {
        sum = sum+ num;
        num++;
    }
    
    printf("The sum of numbers from 1 to 100 is %d", sum);
    
    return 0;
}
