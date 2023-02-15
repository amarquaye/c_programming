/* C program to compare the sides of a triangle */

#include <stdio.h>

main(){
    int side1;
    int side2;
    int side3;

    printf("Enter the value for the three sides of your triangle:\n");
    scanf("%d%d%d", &side1, &side2, &side3);

    if (side1 + side2 > side3)
        printf("Congrats, you have a valid triangle\n");
    if (side1 + side3 > side2)
        printf("Congrats, you have a valid triangle\n");
    if (side2 + side3 > side1)
        printf("Congrats, you have a valid triangle\n");
    else
        printf("Oops, the values you entered cannot form a trainlge\n");

    return 0;
}