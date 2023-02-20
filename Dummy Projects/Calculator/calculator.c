/* Simple calculator using in C */

#include <stdio.h>

/* Addition fuction */
int addFunc(int num1, int num2, int addAnswer){
    
    

    printf("This is the addition section of Jcal\n");
    printf("\nEnter your first number: ");
    scanf("%d", &num1);
    printf("\nEnter your second number: ");
    scanf("%d", &num2);

    addAnswer = num1 + num2;

    printf("\n%d + %d = %d", num1, num2, addAnswer);
}

/* Subtraction function */
int subFunc(int num1, int num2, int subAnswer){
    printf("\nThis is the subtraction section of of Jcal\n");
    printf("\nEnter your first number: ");
    scanf("%d", &num1);
    printf("\nEnter your second number: ");
    scanf("%d", &num2);

    subAnswer = num1 - num2;

    printf("\n%d - %d = %d", num1, num2, subAnswer);

}

/* Multiplication function */
int mulFunc(int num1, int num2, int mulAnswer){
    printf("\nThis is the multiplication section of Jcal\n");
    printf("\nEnter your first number: ");
    scanf("%d", &num1);
    printf("\nEnter your second number: ");
    scanf("%d", &num2);

    mulAnswer = num1 * num2;

    printf("\n%d x %d = %d", num1, num2, mulAnswer);
}

/* Division function */
int divFunc(int num1, int num2, int divAnswer){
    printf("\nThis is the division operation of Jcal\n");
    printf("\nEnter your first number: ");
    scanf("%d", &num1);
    printf("\nEnter your second number: ");
    scanf("%d", &num2);

    divAnswer = num1 / num2;

    printf("\n%d divided by %d = %d", num1, num2, divAnswer);
}

/* Main function */
int main(){
    char num;
    int num1;
    int num2;
    int addAnswer;
    int subAnswer;
    int mulAnswer;
    int divAnswer;

    printf("Welcome to Jcal by Jesse Amarquaye\n");
    printf("Select the operation you want to perform\n");
    printf("\nSelect '+' for addition\n");
    printf("Select '-' to perform the subtraction operation\n");
    printf("Select 'x' to perform a multiplication operation\n");
    printf("Select '/' to perform a division operation\n");
    scanf("%c", &num);
    switch (num)
    {
    case '+' :
        addFunc(num1, num2, addAnswer);
        break;
    
    case '-' :
        subFunc(num1, num2, subAnswer);
        break;

    case '*' :
    case 'x' :
    case 'X' :
        mulFunc(num1, num2, mulAnswer);
        break;

    case '/' :
        divFunc(num1, num2, divAnswer);
        break;
    default:
        printf("\nPlease enter a valid response!\n");
        break;
    }
    
}

