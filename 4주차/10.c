#include <stdio.h>

int main(void) {

	int num, i=9;

	printf("구구단을 구할 양의 정수을 입력하시오 : ");
	scanf("%d", &num);

	while (i>=1) {
		printf("%d × %d = %d \n", num, i, num*i);
		i--;
	}

	return 0;
}