#include <stdio.h>

int main(void) {

	int num, i=0;
	printf("양의 정수를 하나 입력하시오 : ");
	scanf("%d", &num);
	while (i<num) {
		printf("Hello World!\n");
		i++;
	}
	return 0;
}