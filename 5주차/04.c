#include <stdio.h>

int main(void) {

	int a, b, i, j;

	printf("�� �� �Է��Ͻÿ� : ");
	scanf("%d %d", &a, &b);

	for (i = a; i >= 1; i--) {
		if (a%i == 0) {
			for (j = b; j >= 1; j--) {
				if (b%j == 0) {
					if (i == j) {
						printf("�ִ� ����� : %d \n", i);
						i = 0;
						j = 0;
					}
				}
			}
		}
	}
	
	return 0;
}