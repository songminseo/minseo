#include <stdio.h>

int main(void) {

	int res = 0, temp = 5, num;

	while (temp > 0) {
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &num);
		while (num >= 1) {
			res += num;
			temp--;
			num = 0;
		}
	}

	printf("5�� ������ ���� %d�Դϴ�.\n", res);

	return 0;
}