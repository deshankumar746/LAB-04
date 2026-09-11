#include <stdio.h>
int main()
{
    int units,bill;

    printf("Enter units consumed: ");
    scanf("%d",&units);

    if(units<=100)
    {
        bill=units*5;
    }
    else if(units<=200)
    {
        bill=500+(units-100)*8;
    }
    else if(units<=400)
    {
        bill=1300+(units-200)*12;
    }
    else
    {
        bill=3700+(units-400)*15;
    }

    printf("Total Bill: Rs. %d\n",bill);
    
     return 0;
}
