/* C program to accept time in 24 hour format and convert from Ireland to other countries */

/* To be continued soon */

#include <stdio.h>

int main(){
    int time;
    int timeInWashington = time - 5000;
    int timeInMoscow = time + 3000;
    int timeInTokyo = time + 9000;

    printf("Enter the time in 24 hour format. i.e 2235 means 11:35 pm\n");
    scanf("%d", &time);

    printf("\nThe time in Washington is %d o'clock\n", timeInWashington);
    printf("The time is Moscow is %d o'clock\n", timeInMoscow);
    printf("And the time in Tokyo is %d o'clock\n", timeInTokyo);

    return 0;
}