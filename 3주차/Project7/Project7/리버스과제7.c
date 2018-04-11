#include <stdio.h>

int main(void)
{
	int w;
	int t;
	int s;

	printf("정수 w를 입력하시오:");
	scanf("%d", &w);
	printf("정수 t를 입력하시오:");
	scanf("%d", &t);

	s = w * t;

	printf("w=%d, t=%d, s=%d\n", w, t, s);

	return 0;
}