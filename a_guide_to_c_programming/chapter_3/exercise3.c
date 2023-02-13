#include <stdio.h>

/* C program to calculate the average of 1, 1.1, 1.2 and 2.0 */

main(){
    float num1 = 1;
    float num2 = 1.1;
    float num3 = 1.2;
    float num4 = 2.0;

    float avg;

    avg = (num1+num2+num3+num4)/4;

    printf("The average is %5.4f", avg);
}