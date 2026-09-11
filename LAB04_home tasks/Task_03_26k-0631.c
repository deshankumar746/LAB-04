#include <stdio.h>
int main()
{
    int balance,amount;

    printf("Enter balance: ");
    scanf("%d",&balance);

    printf("Enter withdrawal amount: ");
    scanf("%d",&amount);

    if(balance<=0||amount<=0)
    {
        printf("Invalid input. Values must be positive");
    }
    else if(amount%500!=0)
    {
        printf("Withdrawal failed. Amount must be a multiple of 500");
    }
    else if(amount>balance)
    {
    	printf("Withdrawal failed. Insufficient balance");
    }
    else if(amount>25000)
    {
        printf("Withdrawal failed. Daily limit is 25000");
    }
    else
    {
        balance=balance-amount;
        printf("Withdrawal successful. Remaining balance: %d\n",balance);
    }
    return 0;
}
