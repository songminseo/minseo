#include <stdio.h>

int main(void)
{
	int a, b, c, d;

	printf("���� A�� �Է��Ͻÿ�:");
	scanf("%d", &a);
	printf("���� B�� �Է��Ͻÿ�:");
	scanf("%d", &b);
	printf("���� C�� �Է��Ͻÿ�:");
	scanf("%d", &c);
	printf("���� D�� �Է��Ͻÿ�:");
	scanf("%d", &d);

	printf("S�� %d�Դϴ�.\n", a + b + c + d);
	printf("M�� %d�Դϴ�.\n", (a + b + c + d) / 4);

	return 0;
}