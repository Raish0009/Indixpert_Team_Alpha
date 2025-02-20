#include <stdio.h>

long long account_numbers[] = {12345678901, 11223344556};
float deposits[] = {500.0, 300.0};

int deposit()
{
    long long accountNumber;
    int amount;

    printf("\nEnter account number: ");
    scanf("%lld", &accountNumber);

    int accountFound = 0;
    for (int i = 0; i < 2; i++)
    {
        if (account_numbers[i] == accountNumber)
        {
            accountFound = 1;

            do
            {
             printf("\nEnter deposit amount: ");
                scanf("%d", &amount);

                if (amount < 100)
                {
                    printf("\nInvalid amount. Please enter minimum 100.\n");
                }

            } while (amount < 100);

            deposits[i] += amount;
            printf("\nAccount number: %lld\n", accountNumber);
            printf("New deposit amount: %.2f\n", deposits[i]);
            break;
        }
    }

    if (!accountFound)
    {
        printf("\nAccount not found!\n");
    }
}

int main()
{
    deposit();
    return 0;
}