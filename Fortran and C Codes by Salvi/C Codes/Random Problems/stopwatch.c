#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t start_time, end_time, elapsed_time;
    int choice;

    printf("Press 1 to start the stopwatch\n");
    scanf("%d", &choice);

    if (choice == 1) {
        start_time = time(NULL); // get current time in seconds
        printf("Stopwatch started...\n");
    }
    else {
        printf("Invalid input!\n");
        exit(0);
    }

    printf("Press 2 to stop the stopwatch\n");
    scanf("%d", &choice);

    if (choice == 2) {
        end_time = time(NULL); // get current time in seconds
        elapsed_time = end_time - start_time; // calculate elapsed time in seconds
        printf("Elapsed time: %ld seconds\n", elapsed_time);
    }
    else {
        printf("Invalid input!\n");
        exit(0);
    }

    return 0;
}
