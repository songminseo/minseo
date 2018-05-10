#include <stdio.h>

int main(void) {

	int num, temp=1, i;

	printf("계승(factorial)을 구할 정수를 입력하시오 : ");
	scanf("%d", &num);

	for (i=1 ; i <= num ; i++) {
		temp*=i;
	}
	printf("결과 값 : %d \n", temp);
	return 0;
}