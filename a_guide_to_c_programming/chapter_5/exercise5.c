/* C program to display a name when a number is entered */

#include <stdio.h>

main(){
    int day;

    printf("Enter a number to display the day on your calender: ");
    scanf("%d", &day);

    switch (day)
    {
    case 1 : 
        printf("Sunday");
        break;

    case 2 :
        printf("Monday");
        break;

    case 3 :
        printf("Tuesday");
        break;

    case 4 :
        printf("Wednesday");
        break;

    case 5 :
        printf("Thursday");
        break;

    case 6 :
        printf("Friday");
        break;

    case 7 :
        printf("Saturday");
        break;
    
    default :
        printf("Oops, there are seven days in a week\nEnter a valid number from 1 to 7!");
        break;
    }
}