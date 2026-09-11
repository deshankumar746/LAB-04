#include <stdio.h>
int main()
{
    int choice,num,i,prime;

    do
    {
    	printf("1. Even/Odd\n");
        printf("2. Prime\n");
        printf("3. Square\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d",&choice);

    switch(choice)
    {
    	 case 1:
                printf("Enter a number: ");
                scanf("%d",&num);

                if(num%2==0)
                {
                    printf("%d is Even\n",num);
                }
                else
                {
                    printf("%d is Odd\n",num);
                }
                break;

         case 2:
                printf("Enter a number: ");
                scanf("%d",&num);

                if(num<=1)
                {
                    printf("%d is not Prime\n",num);
                }
                else
                {
                    prime=1;

                    for(i=2;i*i<=num;i++)
                    {
                        if(num%i==0)
                        {
                            prime=0;
                            break;
                        }
                    }

                    if(prime==1)
                    {
                        printf("%d is Prime\n",num);
                    }
                    else
                    {
                        printf("%d is not Prime\n",num);
                    }
                }
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d",&num);

                printf("Square of %d is %d\n",num,num*num);
                break;

            case 4:
                printf("program Ended\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice!=4);

    return 0;
}
