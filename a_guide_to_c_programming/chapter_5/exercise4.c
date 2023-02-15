/* C program to display a single numeral as text or in words */

#include <stdio.h>

main(){
    int num;

    printf("Enter a single numeral i.e from 0 to 9: ");

    scanf("%d", &num);

    switch (num)
    {
    case 0 :
        printf("zero");
        break;

    case 1 :
        printf("one");
        break;

    case 2 :
        printf("two");
        break;

    case 3 :
        printf("three");
        break;

    case 4 :
        printf("four");
        break;

    case 5 :
        printf("five");
        break;

    case 6 :
        printf("six");
        break;

    case 7 :
        printf("seven");
        break;

    case 8 :
        printf("eight");
        break;

    case 9 :
        printf("nine");
        break;
    
    default:
        printf("Oops, please enter a valid number from 0 to 9");
        break;
    }

    return 0;
}