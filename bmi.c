#include <stdio.h>

int main(void)
{
	double height;
	double weight;
	double division;
	double bmi;
	char name[20];
	
	printf("Enter your name: ");
	scanf("%s", &name);

	printf("Enter height: ");
	scanf("%lf", &height);

	printf("Enter weight: ");
	scanf("%lf", &weight);

	division = weight / height;

	bmi = division / height;

	printf("%s, your BMI is: %lf\n", name, bmi);

	if (bmi >= 0 && bmi <= 18.5)
	{
		printf("Since you have a BMI of %lf, you are classed as underweight.\n", bmi);
	} 
	else if (bmi >= 18.6 && bmi <= 24.9)
	{
		printf("Since you have a BMI of %lf, you are classed as healthy.\n", bmi);
	}
	else if (bmi <= 25 && bmi <= 30)
	{
		printf("Since you have a BMI of %lf, you are classed as overweight.\n", bmi);
	}
	else
	{
		printf("Since you have a BMI of %lf, you are classed as obese.\n", bmi);
	} 

	return 0;
}
