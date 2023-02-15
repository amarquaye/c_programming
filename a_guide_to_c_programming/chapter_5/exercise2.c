/* C program to input two numbers and find the smaller of the two using the conditional operator ? */

#include <stdio.h>

main(){
    int num1;
    int num2;
    int smaller;

    printf("Enter your two numbers:\n");
    scanf("%d%d",&num1, &num2);

    smaller = (num1 < num2) ? num1 : num2;
    printf("%d is the smallest of %d and %d", smaller, num1, num2);

    return 0;
}