#include<stdio.h>


void deposit()
{
    int accountnumber;
    int amount;

    printf("\nenter account number ");
    scanf("%d",&accountnumber);

    do
    {
        printf("\nenter deposit amount ");
        scanf("%d",&amount);

        if (amount<100)
        {
            printf("\ninvalid amount ");
        }

    } 
    while (amount<100);
    printf("\naccount number %d",accountnumber);
    printf("\ndeposit amount %d",amount);

}
int main()
{

 deposit();

    return 0;
}