#include <stdio.h>

int main()
{

    int choice;
    long long creat_acount_number;
    char creat_account_name[40];
    float deposit;

    

    printf("======Simple Banking System======\n");

    printf("==============================\n");
    printf("1. Create a bank Account :\n");
    printf("2. Deposit Money :\n");
    printf("3. Wihdraw Money :\n");
    printf("4. Check Balance :\n");
    printf("5. View Account Details :\n");
    printf("6. Exits :\n");
    printf("==============================\n");

    printf("Please enter you choice number : ");

    while (1)
    {
        

        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nCreate a banck Account :\n");

            printf("Enter your account number :");
            scanf("%lld", &creat_acount_number);

            while (creat_acount_number < 11111111111 || creat_acount_number > 22222222222)
            {
                printf("Please Enter you 11 Digits number: \n");
                printf("Please enter account number: ");
                scanf("%lld", &creat_acount_number);
            }
            printf("Enter account holder name : ");
            scanf("%s", &creat_account_name);

            printf("Enter your Depost amount:  ");
            scanf("%f", &deposit);
            while (deposit < 500)
            {
                printf("Please deposit amount minimum 500:\n");
                printf("Enter you depost amount: ");
                scanf("%f", &deposit);
            }

            printf("Successfully Creat account Details: \n");

            printf("Creat account number: %lld\n", creat_acount_number);
            printf("My account name: %s\n", creat_account_name);

            printf("My Deposit amount: %f\n", deposit);

            printf("\nPlease enter you choice number :");
        }

        else if (choice == 2)
        {
            printf(" \n  Deposit Money : \n");
            printf("\nPlease enter you choice number :");
        }
        else if (choice == 3)
        {
            printf("\n  Withdraw Money\n");

            printf("\nPlease enter you choice number :");
        }
        else if (choice == 4)
        {
            printf("\n Check your balance :\n");

            printf("\nPlease enter you choice number :");
        }
        else if (choice == 5)
        {
            printf(" \n View Account  Details :\n");

            printf("\nPlease enter you choice number :");
        }
        else if (choice == 0)
        {
             printf(" \n  Exiting : thank you!"); 
            break;
        }
        else
        {
            printf(" \n Invalid Choice Please try again!\n ");
            printf("\nPlease enter you choice number :");
        }
    }
    return 0;
}
