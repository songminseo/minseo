#include <stdio.h>

int main(void) {

	int num, i=1;
	printf("���� ������ �ϳ� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	while (i<=num) {
		printf("�޾ƶ� %d \n",i*3);
		i++;
	}
	return 0;
}