#include <stdio.h>

int main(void)
{
	double weight;
	double height;
	double bmi;


	printf("몸무게를 입력하시오(kg):");
	scanf("%lf", &weight);
	printf("키를 입력하시오(cm):");
	scanf("%lf", &height);

	bmi = weight / height;
	printf("당신의 bmi는:%f\n", bmi);

	return 0;
}