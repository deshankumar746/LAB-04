#include <stdio.h>

int main()
{
	float weight,height;
	
	
	printf("Enter Your Weight(kg) ");
	scanf("%f",&weight);
	
	printf("Enter Your Height(m) ");
	scanf("%f",&height);
	
	float bmi=(weight/(height*height));
	
	if(weight<=0 || height<=0)
	{
		printf("Invalid Information");
	}
	
	else
	{
		printf("BMI = %.2f \n",bmi);
		
		if(bmi<18.5)
		{
			printf("Category: Underweight");
		}
		
		else if(bmi>=18.5 && bmi<25)
		{
			printf("Category: Normal");
		}
		
		else if(bmi>=25 && bmi<30)
		{
			printf("Category: Overweight");
		}
		
		else
		{
			printf("Category: Obese");
		}
		
	}
		return 0;
	
}
