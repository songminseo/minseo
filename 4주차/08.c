#include <stdio.h>

int main(void) {

	int num, i=1;
	printf("양의 정수를 하나 입력하시오 : ");
	scanf("%d", &num);
	while (i<=num) {
		printf("받아라 %d \n",i*3);
		i++;
	}
	return 0;
}