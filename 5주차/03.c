#include <stdio.h>

int main(void) {

	int a, b, i, j, temp;

	printf("두 수 입력하시오 : ");
	scanf("%d %d", &a, &b);

	if (b >= a) {
		temp = b;
		b = a;
		a = temp;
	}
	for (i = b; i <= a; i++) {
			for (j = a; j <= 9; j++) {
				printf("%d × %d = %d \n", i, j, i*j);
			}
			printf("\n");
		}
	return 0;
}