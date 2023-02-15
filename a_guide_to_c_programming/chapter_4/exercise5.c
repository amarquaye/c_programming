/* Program to input 3 floating-point numbers from the keyboard to calculate sum and average */

#include <stdio.h>

main(){
    float num1;
    float num2;
    float num3;

    float avg;

    printf("Enter three numbers:\n ");
    scanf("%f%f%f", &num1, &num2, &num3);

    avg = (num1 + num2 + num3) / 3;

    printf("The average of %f, %f and %f is %.3f", num1, num2, num3, avg);

    return 0;


}