/* C program to emulate the MTN momo interface */

#include <stdio.h>

/* 1) Transfer money page */
void transferMoney(int num, int mobileNumber, float amount, int ref, float tax, float totalAmount, int pin){
    printf("1) MoMo User\n");
    printf("2) Non MoMo User\n");
    printf("3) Send with Care\n");
    printf("4) Favorite\n");
    printf("5) Other Networks\n");
    printf("6) Bank Account\n");
    printf("0) Back\n\n");
        
    printf("\nEnter your choice: ");
    scanf("%d", &num);

    switch (num)
        {
        case 1 :
            printf("\nEnter mobile number: ");
            scanf("%d", &mobileNumber);
            printf("\nConfirm Number: ");
            scanf("%d", &mobileNumber);
            printf("\nEnter amount: ");
            scanf("%f", &amount);
            printf("\nEnter Reference: ");
            scanf("%d", &ref);

            /* Formula */
            tax = amount * 0.01;
            totalAmount = amount + tax;

            printf("\nTransfer to - 0%d for GHS %.2f with Reference: %d.\nFee is GHS 0.00, Tax amount is GHS %.2f.\nTotal Amount is GHS %.2f.\nEnter MM PIN or 2 to cancel.\n", mobileNumber, amount, ref, tax, totalAmount);
            scanf("%d", &pin);
            printf("\nYou have sent GHS %.2f to - 0%d.\nFee: GHS 0.00.\nTax: GHS %.2f.\nTransaction ID 12345678910.\nThank you for using Mobile Money (:", amount, mobileNumber, tax);
            /* To be continued... */
            break;


        }
}

/* 4) Allow Cash Out */
int allowCashOutFunc(num){
    printf("\nAllow Cash Out\n");
    printf("1) Yes\n");
    printf("2) No\n");
    printf("0) Back\n");

    printf("\nEnter your choice: ");

    scanf("%d", &num);

    switch (num)
    {
    case 1 :
        printf("\nCash Out is Allowed\n");
        break;
    
    case 2 :
        printf("\nCash Out is not Allowed\n");
        break;

    case 0 :
        void main();
    default:
        printf("\nPlease enter a valid response\nAn example is entering either 1, 2 or 0\n");

        break;
    }
}

/* Main Function */
void main(){

    /* Variable declaration */
    int num;
    int mobileNumber;
    float amount;
    int ref;
    float tax;
    float totalAmount;
    int pin;

    /* Beginning of code */
    printf("Menu\n");
    printf("1) Transfer Money\n");
    printf("2) MoMoPay & Pay Bill\n");
    printf("3) Airtime & Bundles\n");
    printf("4) Allow Cash Out\n");
    printf("5) Financial Services\n");
    printf("6) My Wallet\n\n");
    printf("\nEnter your choice: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1 :
        transferMoney(num, mobileNumber, amount, ref, tax, totalAmount, pin);
        break;
    
    case 4 :
        allowCashOutFunc(num);
        break;
    default:
        break;
    }
}