#include <stdio.h>

int main()
{

    int choice;

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
        else if (choice == 6)
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
