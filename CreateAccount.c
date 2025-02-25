#include <stdio.h>
#include <string.h>
#include <ctype.h>

int choice;
int num_accounts = 0;
char account_numbers[50][50];
char account_names[50][50];
float deposits[50];

void createAccount();

int validate()
{
    int x = 1;

    int flag = 0;

    printf("Enter your account number: ");
    scanf("%s", &account_numbers[num_accounts]);

    int length = strlen(account_numbers[num_accounts]);

    for (int i = 0; i < length; i++)
    {
        if (!isdigit(account_numbers[num_accounts][i]))
        {
            validate();
        }
        else
        {
            flag = 1;
        }
    }

    return flag;
}

int validateAccountName()
{
    int flag = 1;

    printf("Enter account holder name: ");
    scanf("%s", account_names[num_accounts]);

    int length = strlen(account_names[num_accounts]);

    for (int i = 0; i < length; i++)
    {
        if (!isalpha(account_names[num_accounts][i]))
        {
            printf("Invalid account name! Only alphabets are allowed.\n");
            flag = 0;
            break;
        }
    }

    return flag;
}

void createAccount()
{
    printf("\nCreate a bank Account:\n");
    validate();

    while (strlen(account_numbers[num_accounts]) != 11)
    {
        printf("Please enter an 11-digit number: ");
        scanf("%s", &account_numbers[num_accounts]);
    }

    if (!validateAccountName()){
        return;
    }

    printf("Enter your deposit amount: ");
    scanf("%f", &deposits[num_accounts]);

    while (deposits[num_accounts] < 500)
    {
        printf("Please deposit a minimum of 500: ");
        scanf("%f", &deposits[num_accounts]);
    }

    printf("\nSuccessfully created account:\n\n");
    printf("Account number: %s\n", account_numbers[num_accounts]);
    printf("Account name: %s\n", account_names[num_accounts]);
    printf("Deposit amount: %.2f\n\n", deposits[num_accounts]);

    num_accounts++;
}
int main()
{
    while (1)
    {
        printf("======Simple Banking System======\n");
        printf("==============================\n");
        printf("1. Create a bank Account:\n");
        printf("2. Deposit Money:\n");
        printf("3. Withdraw Money:\n");
        printf("4. Check Balance:\n");
        printf("5. View Account Details:\n");
        printf("6. Exit:\n");
        printf("==============================\n");
        printf("Please enter your choice number: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("\nInvalid choice, please try again!\n\n");
            while (getchar() != '\n'); 
            continue;
        }

        switch (choice)
        {
            case 1:
                createAccount();
                break;
            case 2:
                if (num_accounts == 0)
                {
                    printf("\n----- No accounts are available, please create an account first! -----\n\n");
                }
                else
                {
                    printf(" \n  Deposit Money : \n\n");
                }
                break;
            case 3:
                if (num_accounts == 0)
                {
                    printf("\n----- No accounts are available, please create an account first! -----\n\n");
                }
                else
                {
                    printf("\n  Withdraw Money\n\n");
                }
                break;
            case 4:
                if (num_accounts == 0)
                {
                    printf("\n----- No accounts are available, please create an account first! -----\n\n");
                }
                else
                {
                    printf("\n Check your balance :\n\n");
                }
                break;
            case 5:
                if (num_accounts == 0)
                {
                    printf("\n----- No accounts are available, please create an account first! -----\n\n");
                }
                else
                {
                    printf(" \n View Account  Details :\n\n");
                }
                break;
            case 6:
                printf("\nThank you for visiting!\n\n");
                return 0;
            default:
                printf("\nInvalid choice, please try again!\n\n");
                break;
        }
    }
    return 0;
}
