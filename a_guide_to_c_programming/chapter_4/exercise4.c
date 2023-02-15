/* Program to accept a temperature in Celsius and convert it to degrees Fahrenheit */

#include <stdio.h>

main(){
    float fahrenheit;
    float celsius;

    printf("Enter a temperature in degrees Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("%.2f degrees Celsius is equivalent to %.2f degrees Fahrenheit", celsius, fahrenheit);
}