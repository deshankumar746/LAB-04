#include <stdio.h>
int main()
{
    int a,b,c;

    printf("Enter Three Side Lengths: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a<=0 || b<=0 || c<=0)
    {
        printf("Invalid Sides");
    }
    else if(a+b<=c || b+c<=a || a+c<=b)
    {
        printf("Not A Triangle");
    }
    else
    {
        printf("Valid Triangle\n");

        if(a==b && b==c)
        {
            printf("Equilateral Triangle");
        }
        else if(a==b || a==c || b==c)
        {
            printf("Isosceles Triangle");
        }
        else
        {
            printf("Scalene Triangle");
        }
    }
    return 0;
}
