#include <stdio.h>
int choice;
int num_accounts = 0;
long long account_numbers[50];
char account_names[50][50];
float deposits[50];
int main()
{

    while(1){
    
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

        if( scanf("%d", &choice)!=1){
            printf("\n Invalid input Please enter your number: ");
            while (getchar()!='\n');
            continue;
        }
            

        if (choice == 1)
        {

            printf("\nCreate a bank Account :\n\n ");
           

        }

        else if (choice == 2)
        {
            if (num_accounts == 0)
            {
                printf("\n ----- No accounts are available please create account first! ----- \n\n");
            }
            else
            {
                printf(" \n  Deposit Money : \n");
            }
        }
        else if (choice == 3)
        {
            if (num_accounts == 0)
            {
                printf("\n ----- No accounts are available please create account first! ----- \n\n");
            }
            else
            {
                printf("\n  Withdraw Money\n");
            }
        }
        else if (choice == 4)
        {
            if (num_accounts == 0)
            {
                printf("\n ----- No accounts are available please create account first! ----- \n\n");
            }
            else
            {
                printf("\n Check your balance :\n");
            }
        }
        else if (choice == 5)
        {
            if (num_accounts == 0)
            {
                printf("\n ----- No accounts are available please create account first! ----- \n\n");
            }
            else
            {
                printf(" \n View Account  Details :\n");
            }
        }
        else if (choice == 6)
        {
            printf(" \n Thank you for visiting!");
            break;
        }
        else
        {
            printf(" \n Invalid Choice Please try again!\n ");
        }
    }
    return 0;
}
