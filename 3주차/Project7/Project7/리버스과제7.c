#include <stdio.h>

int main(void)
{
	int w;
	int t;
	int s;

	printf("���� w�� �Է��Ͻÿ�:");
	scanf("%d", &w);
	printf("���� t�� �Է��Ͻÿ�:");
	scanf("%d", &t);

	s = w * t;

	printf("w=%d, t=%d, s=%d\n", w, t, s);

	return 0;
}