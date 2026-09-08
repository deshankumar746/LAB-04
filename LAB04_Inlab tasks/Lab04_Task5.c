#include <stdio.h>
int main() {
	
    float num1,num2,result;
    char operator;

    printf("Enter first number: ");
    scanf("%f",&num1);

    printf("Enter operator (+ - * /): ");
    scanf(" %c",&operator);

    printf("Enter second number: ");
    scanf("%f",&num2);

    switch(operator) {
        case '+':
            result=num1+num2;
            printf("Result= %.2f\n",result);
            break;

        case '-':
            result=num1-num2;
            printf("Result= %.2f\n",result);
            break;
        case '*':
            result=num1*num2;
            printf("Result= %.2f\n",result);
            break;
        case '/':
            if(num2==0) {
                printf("Error:Division by zero is not allowed\n");
            }
            else {
                result=num1/num2;
                printf("Result= %.2f\n",result);
            }
            break;

        default:
            printf("Error: Invalid operator\n");
    }
    return 0;
}

