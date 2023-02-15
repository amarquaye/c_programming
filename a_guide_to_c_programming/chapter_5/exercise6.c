/* C program to display the effects of of earthquakes based on the Richter scale value */

#include <stdio.h>

main(){
    float scale;

    printf("Enter the scale of the earthquake: ");
    scanf("%f", &scale);

    if (scale < 4)
        printf("Little.");
    if (scale > 3.9 && scale < 5)
        printf("Windows shake.");
    if (scale > 4.9 && scale < 6)
        printf("Walls crack; poorly built buildings are damaged.");
    if (scale > 5.9 && scale < 7)
        printf("Chimneys tumble; ordinary buildings are damaged.");
    if (scale > 6.9 && scale <8)
        printf("Underground pipes break; well-built buildings are damaged.");
    if (scale > 7.9)
        printf("Ground rises and falls in waves; most buildings are destroyed.");
    
    return 0;
}