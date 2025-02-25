#include <stdio.h>
// define account numbers and their corresponding balances 
    long long accountNumbers[]={100123456789,100987654321,1001567891234};
    float accountbalances[]={5000.75,3000.50,1200.30}; //initial balances

  //Function to handle withdrawal
  void withdraw(int accountcount){
  long long accountnumber;
  float amount;

  //ask user for account number 
  printf("enter your account number: ");
  scanf("%11d",&accountnumber);

  int accountfound=0; //flag to track if account exists

  // search for the account number
  for (int i=0;i<accountcount;i++) {
    if (accountNumbers[i]==accountnumber) {
      accountfound=1;

      //ask for withrawal amount
      printf("enter the withrawal amount: ");
      scanf("%f",&amount);

      //check if balance is sufficient
      if (accountbalances[i]<amount) {
        printf("withrawal successful! your new balance is %.2f\n",accountbalances[i]);
        return; //exit after successful transaction
      }
    }

    //if account is not found, display error message
    if (!accountfound) {
      printf("account not found!\n");
    }
  }
  //main function
  int main() {
    int accountcount =3; //number of accounts

    withdraw(accountcount); //call the withdrawal function

    return 0;
  }
  