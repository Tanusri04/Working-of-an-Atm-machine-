#include <stdio.h>
int Deposit()
{
    int amt;
    char answer;
    printf("Enter the amount you want to deposit: ");
    scanf("%d", &amt);
    printf("Rs %d is deposited to your bank account\n", amt);
    printf("Do you want to print the receipt? Enter 'Y'for yes and 'N' for no ");
    scanf(" %c",&answer);
    (answer=='Y')?
    printf("\nPrinting Receipt...\nTransaction Completed.\n"):printf("\nTransaction Completed.\n");
}
int Withdraw()
{
    int amount;
    char ans;
    printf("Enter the amount you want to withdraw: ");
    scanf("%d", &amount);
    printf("You have successfully withdrawn Rs %d\n",amount);
    printf("Do you want to print the receipt? Enter 'Y'for yes and 'N' for no ");
    scanf(" %c",&ans);
    (ans=='Y')?
    printf("\nPrinting Receipt...\nTransaction Completed.\n")
    :printf("\nTransaction Completed.\n");
}
int main()
{
    unsigned long long int cardno;
    int pin, choice;
    printf("\n*****Welcome to our ATM machine*****\n\nInsert your card...\nPlease enter your 16 digit card number: ");
    scanf("%lld", &cardno);
    printf("Enter your 4 digit pin: ");
    scanf("%d", &pin);
    do
    {
        printf("\nChoose from the following: \n1. Deposit \n2. Withdraw \n3. Exit \n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: Deposit();
                    break;
            case 2: Withdraw();
                    break;
            case 3: printf("\nThank you for using our ATM machine. \nYou can now remove your card");
                    break;
        }   
    }while(choice!=3);
}
