#include <stdio.h>
#include <string.h>
#include <ctype.h>

int choice;
int num_accounts = 0;
char account_numbers[50][50];
char account_names[50][50];
float deposits[50];

void createAccount();

void deposit();

void withdraw();

void checkBalance();

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

    if (!validateAccountName())
    {
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

void deposit()
{
    char acc_num[50];
    float amount;
    int found = 0;

    printf("\nEnter account number to deposit money: ");
    scanf("%s", acc_num);

    for (int i = 0; i < num_accounts; i++)
    {
        if (strcmp(account_numbers[i], acc_num) == 0)
        {
            while (1)
            {
                printf("Enter amount to deposit: ");
                if (scanf("%f", &amount) != 1)
                {
                    printf("Invalid input! Please enter a valid numeric amount.\n");
                    while (getchar() != '\n')
                        ;
                    continue;
                }

                if (amount <= 0)
                {
                    printf("Invalid deposit amount! Must be greater than zero.\n");
                    continue;
                }

                deposits[i] += amount;
                printf("\nSuccessfully deposited %.2f. New balance: %.2f\n\n", amount, deposits[i]);
                break;
            }

            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nAccount not found!\n\n");
    }
}

void withdraw()
{
    char acc_num[50];
    float amount;
    int found = 0;

    printf("\nEnter account number to withdraw money: ");
    scanf("%s", acc_num);

    for (int i = 0; i < num_accounts; i++)
    {
        if (strcmp(account_numbers[i], acc_num) == 0)
        {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount > 0 && amount <= deposits[i])
            {
                deposits[i] -= amount;
                printf("\nSuccessfully withdrew %.2f. New balance: %.2f\n\n", amount, deposits[i]);
            }
            else
            {
                printf("\nInvalid withdrawal amount or insufficient balance!\n\n");
            }
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nAccount not found!\n\n");
    }
}

void checkBalance()
{
    char Account_number[50];
    int AccountFound = 0;

    printf("\nEnter account number to check balance: ");
    scanf("%s", Account_number);

    for (int i = 0; i < num_accounts; i++)
    {
        if (strcmp(account_numbers[i], Account_number) == 0)
        {
            printf("\nAccount Number: %s\n", account_numbers[i]);
            printf("Account Holder: %s\n", account_names[i]);
            printf("Current Balance: %.2f\n\n", deposits[i]);
            AccountFound = 1;
            break;
        }
    }

    if (!AccountFound)
    {
        printf("\nAccount not found!\n\n");
    }
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
            while (getchar() != '\n')
                ;
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
                deposit();
            }
            break;
        case 3:
            if (num_accounts == 0)
            {
                printf("\n----- No accounts are available, please create an account first! -----\n\n");
            }
            else
            {
                withdraw();
            }
            break;
        case 4:
            if (num_accounts == 0)
            {
                printf("\n----- No accounts are available, please create an account first! -----\n\n");
            }
            else
            {
                checkBalance();
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
