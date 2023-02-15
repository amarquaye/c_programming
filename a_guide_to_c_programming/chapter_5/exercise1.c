/* C program to read in two integers and check if the first integer is evenly divisible by the second */

#include <stdio.h>

main(){
    int num1;
    int num2;

    printf("Enter your two numbers below:\n");
    scanf("%d%d", &num1, &num2);

    if (num1 % num2 == 0)
        printf("%d is divisible by %d", num1, num2);
    else
        printf("%d is not divisible by %d", num1, num2);

    return 0;
}