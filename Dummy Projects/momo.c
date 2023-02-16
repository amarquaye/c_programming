/* C program to emulate the MTN momo interface */

#include <stdio.h>
#include <string.h>

main(){
    int num;
    int mobileNumber;
    float amount;
    int ref;
    float tax;
    float totalAmount;
    int pin;

    

    

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
        printf("1) MoMo User\n");
        printf("2) Non MoMo User\n");
        printf("3) Send with Care\n");
        printf("4) favorite\n");
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
            scanf("%d", &amount);
            printf("\nEnter Reference: ");
            scanf("%d", &ref);

            tax = amount * 0.01;
            totalAmount = amount + tax;
            printf("\nTransfer to - 0%d for %.2f with Reference: %d.\nFee is GHS 0.00, Tax amount is %f.\nTotal Amount is %.2f.\nEnter MM PIN or 2 to cancel.\n", mobileNumber, amount, ref, tax, totalAmount);
            scanf("%d", &pin);
            break;
        
        default:
            break;
        }

    case 2 :
        printf("MoMo Pay & Pay Bill\n");
        printf("1) MoMo Pay\n");
        printf("2) Pay Bill\n");
        printf("3) GhQR\n");
        printf("0) Back");
        break;

    case 3 :
        printf("Airtime & Bundles\n");
        printf("1) Airtime\n");
        printf("2) Internet Bundles\n");
        printf("3) Fixed Broadband\n");
        printf("4) Schedule Airtime\n");
        printf("0) Back\n");
        break;

    case 4 :
        printf("Allow Cash Out\n");
        printf("1) Yes\n");
        printf("2) No\n");
        break;

    case 5 :
        printf("Financial Services\n");
        printf("1) Bank Services\n");
        printf("2) Savings\n");
        printf("3) Loans\n");
        printf("4) Pensions and Investments\n");
        printf("5) Insurance\n");
        printf("6) Trade Shares\n");
        printf("0) Back\n");
        break;

    case 6 :
        printf("My Wallet\n");
        printf("1) Check Balance\n");
        printf("2) Allow Cash Out\n");
        printf("3) My Approvals\n");
        printf("4) Report Fraud\n");
        printf("5) Statements\n");
        printf("6) Change & Reset PIN\n");
        printf("7) Airtime\n");
        printf("# for next\n");
        break;
    
    default:
        break;
    }

    return 0;
}