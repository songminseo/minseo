#include <stdio.h>

int main(void) {

	int num, temp=1, i;

	printf("���(factorial)�� ���� ������ �Է��Ͻÿ� : ");
	scanf("%d", &num);

	for (i=1 ; i <= num ; i++) {
		temp*=i;
	}
	printf("��� �� : %d \n", temp);
	return 0;
}