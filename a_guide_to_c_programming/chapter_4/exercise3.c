/* Program to accept a temperature in Fahrenheit and convert it to degrees Celsius */

#include <stdio.h>

main(){
    float fahrenheit;
    float celsius;

    printf("Enter a temperature in degrees Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32.0) * (5.0/9.0);

    printf("%.2f degrees Fahrenheit is equivalent to %.2f degrees Celsius", fahrenheit, celsius);
}