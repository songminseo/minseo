#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;
	char score;

	printf("������ �Է��ϼ���:");
	scanf("%c", &score );
	printf("������Է�:");
	scanf("%d", &x);
	printf("���м����Է�");
	scanf("%d", &y);
	printf("������Է�:");
	scanf("%d", &z);

	printf("���� : %d\n", x + y + z);
	printf("��� : %d\n", (x+y+z) / 3);
	return 0;
}