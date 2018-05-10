#include <stdio.h>

int main(void) {

	int res = 0, temp = 5, num;

	while (temp > 0) {
		printf("정수를 입력하세요 : ");
		scanf("%d", &num);
		while (num >= 1) {
			res += num;
			temp--;
			num = 0;
		}
	}

	printf("5개 정수의 합은 %d입니다.\n", res);

	return 0;
}