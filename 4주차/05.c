#include <stdio.h>

int main(void) {

	int num1, num2, temp;

	printf("���� ������ �� ���� �Է��Ͻÿ� : ");
	scanf("%d %d", &num1, &num2);

	for (temp=0 ; num1 <= num2 ; num1++) {
		temp+=num1;
	}
	printf("��� �� : %d \n", temp);
	return 0;
}