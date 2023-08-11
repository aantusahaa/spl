#include <stdio.h>

int main() {
    int daysWithoutWater = 0;  // Counter for consecutive days without watering
    int watering;

    for (int i = 1; i <= 7; i++) {
        printf("Is the tree watered on day %d? (1 for Yes, 0 for No): ", i);
        scanf("%d", &watering);

        if (watering == 1) {
            daysWithoutWater = 0; 
        } else {
            daysWithoutWater++; 

            if (daysWithoutWater == 3) {
                printf("The tree is dead.\n");
            }
        }
    }

    printf("The tree is alive.\n");

    return 0;
}
