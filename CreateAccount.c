#include <stdio.h>

int main()
{
    long long accountNumber;
    char accountName[50];
    float initialDeposit;

    printf("Enter your account number: ");
    scanf("%lld", &accountNumber);

    if (accountNumber < 10000000000 || accountNumber > 99999999999)
    {
        printf("Account number must be exactly 11 digits!\n");
        return;
    }

    printf("Enter your name: ");
    scanf("%s", accountName);

    printf("Enter initial deposit: ");
    scanf("%f", &initialDeposit);

    if (initialDeposit < 500)
    {
        printf("Initial deposit must be at least 500!\n");
        return;
    }

    printf("Account created successfully!\n");

    printf("Account number: %lld\n", accountNumber);
    printf("Account name: %s\n", accountName);
    printf("Initial deposit: %f\n", initialDeposit);

    return 0;
}