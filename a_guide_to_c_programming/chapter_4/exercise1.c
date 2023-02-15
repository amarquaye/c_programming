#include <stdio.h>

/* C Program to input four numbers and display them in a reverse order */

main(){
    int num1 = 3;
    int num2 = 6;
    int num3 = 10;
    int num4 = 5;

    printf("These are the numbers in the right order:\n%d %d %d %d",num1, num2, num3, num4);
    printf("\nAnd these are the number in the reversed order: %d %d %d %d", num4, num3, num2, num1);

    return 0;
}