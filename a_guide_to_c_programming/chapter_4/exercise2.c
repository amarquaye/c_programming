#include <stdio.h>

/* C program to print the number of heart beats a person has had in his/her lifetime */

main(){
    int min = 70;
    long year = min * 525600;
    int age;
    

    /* Ask the use for his/her age */

    printf("Enter your age: ");
    scanf("%d", &age);

    long rate = age * year;

    /* Displaying results */
    printf("Your heart has been beating for %ld times in your lifetime!", rate);
}