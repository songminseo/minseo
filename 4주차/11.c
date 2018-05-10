#include <stdio.h>

int main(void) {

	int num, temp, op;
	float res = 0;

	printf("정수 몇 개 입력하실래요 : ");
	scanf("%d", &num);
	
	for (temp = num; temp > 0; temp--) {
		printf("\n%d번째 정수를 입력하세요 : ", num - temp + 1);
		scanf("%d", &op);
		res += op;
	}
	printf("\n\n입력한 값들의 평균은 %f입니다. \n", res/num);

	return 0;
}