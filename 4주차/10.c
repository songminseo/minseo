#include <stdio.h>

int main(void) {

	int num, i=9;

	printf("�������� ���� ���� ������ �Է��Ͻÿ� : ");
	scanf("%d", &num);

	while (i>=1) {
		printf("%d �� %d = %d \n", num, i, num*i);
		i--;
	}

	return 0;
}