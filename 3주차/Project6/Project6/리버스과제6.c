#include <stdio.h>

int main(void)
{
	int a, b, c, d;

	printf("숫자 A를 입력하시오:");
	scanf("%d", &a);
	printf("숫자 B를 입력하시오:");
	scanf("%d", &b);
	printf("숫자 C를 입력하시오:");
	scanf("%d", &c);
	printf("숫자 D를 입력하시오:");
	scanf("%d", &d);

	printf("S는 %d입니다.\n", a + b + c + d);
	printf("M은 %d입니다.\n", (a + b + c + d) / 4);

	return 0;
}