#include <stdio.h>

int main(void)
{
	double weight;
	double height;
	double bmi;


	printf("�����Ը� �Է��Ͻÿ�(kg):");
	scanf("%lf", &weight);
	printf("Ű�� �Է��Ͻÿ�(cm):");
	scanf("%lf", &height);

	bmi = weight / height;
	printf("����� bmi��:%f\n", bmi);

	return 0;
}