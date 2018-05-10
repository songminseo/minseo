#include <stdio.h>

int main(void) {

	int n;

	printf("수를 입력하세요 : ");
	scanf("%d", &n);

	switch (n/10) {
	case 0:
		printf("0이상 10미만");
		break;
	
	case 1:
		printf("10이상 20미만");
		break;
	
	case 2:
		printf("20이상 30미만");
		break;
	
	default:
		printf("30이상");
	}
	printf("\n");

	return 0;
}