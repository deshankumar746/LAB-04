#include <stdio.h>
int main() {
	
    int month,year;

    printf("Enter month(1-12): ");
    scanf("%d",&month);

    printf("Enter year: ");
    scanf("%d",&year);

    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Month %d has 31 days\n",month);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Month %d has 30 days\n",month);
            break;
        case 2:
            if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                printf("February %d has 29 days\n",year);
            }
            else{
                printf("February %d has 28 days\n",year);
            }
            break;
        default:
            printf("Invalid month!  Enter a month from 1 to 12");
    }
    return 0;
}

