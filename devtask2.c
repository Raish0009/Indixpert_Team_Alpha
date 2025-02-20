#include <stdio.h>

long long accountNumbers[] = {100123456789, 100987654321, 100567891234}; // Example account numbers
float accountBalances[] = {5000.75, 3000.50, 1200.30}; // Corresponding balances

void withdraw(int accountCount) {
    long long accountNumber;
    float amount;
    
    printf("Enter your account number: ");
    scanf("%lld", &accountNumber);
    
    int accountFound = 0;
    for (int i = 0; i < accountCount; i++) {
        if (accountNumbers[i] == accountNumber) {
            accountFound = 1;
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);
            
            if (accountBalances[i] < amount) {
                printf("Insufficient balance!\n");
                return;
            }
            accountBalances[i] -= amount;
            printf("Withdrawal successful! Your new balance is %.2f\n", accountBalances[i]);
            break;
        }
    }

    if (!accountFound) {
        printf("Account not found!\n");
    }
}

int main() {
    int accountCount = 3;  // Number of accounts
    withdraw(accountCount);  // Call the withdraw function
    return 0;
}
