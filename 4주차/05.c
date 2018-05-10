#include <stdio.h>

int main(void) {

	int num1, num2, temp;

	printf("작은 수부터 두 정수 입력하시오 : ");
	scanf("%d %d", &num1, &num2);

	for (temp=0 ; num1 <= num2 ; num1++) {
		temp+=num1;
	}
	printf("결과 값 : %d \n", temp);
	return 0;
}