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
    char receiverName[50];
    int secretCode;

    


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
            
        case 2 :
            printf("\nEnter Receiver Name\n");
            scanf("%s", &receiverName);
            printf("\nEnter Amount\n");
            scanf("%f", &amount);
            printf("\nEnter Reference\n");
            scanf("%d", &ref);
            printf("\nEnter Secret Code\n");
            scanf("%d", &secretCode);
            printf("\nConfirm Secret Code\n");
            scanf("%d", &secretCode);

            /* Formula */
            tax = amount * 0.01;
            totalAmount = amount + 1.50 + tax;

            printf("\nFee is GHS 1.50, Tax amount is GHS %.2f and Total Amount is GHS %.2f.\nEnter MM PIN or 2 to cancel.\n", tax, totalAmount);
            /* To be continued ...*/
            break;
        case 3 :
            printf("\nSend with Care\n");
            printf("1) Mobile User\n");
            printf("2) MyCaretaker\n");
            printf("3) AYO Send with Care Balances or Claim\n");
            printf("0) Back");

            switch (num)
            {
            case 1 :
                printf("\nPlease enter recipient's mobile number\n");
                scanf("%d", mobileNumber);
                printf("\nPlease repeat the recipient's mobile number\n");
                scanf("%d", mobileNumber);
                printf("\nPlease enter amount\n");
                scanf("%f", &amount);
                printf("\nServer is undergoing maintenance, please try again later.");
                break;
            
            default:
                break;
            }
        
        default:
            break;
        }
    
    break;

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
        
        switch (num)
        {
        case 1 :
            printf("\nAirtime\n");
            printf("1) Self\n");
            printf("2) Others\n");
            printf("3) Welcome Pack\n");
            printf("4) Other Networks\n");
            printf("0) Back\n");
            break;
        
        break;
        default:
            break;
        }
    
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