#include <stdio.h>

int main(void) {
	int kor, eng, math, avr;
	printf("국어, 영어, 수학 점수를 입력하시오 : ");
	scanf("%d %d %d", &kor, &eng, &math);
	
	avr = (kor + eng + math) / 3;

	printf("평균 점수 %d\n", avr);

	if (avr >= 90) {
		printf("A학점\n");
	}
	else if (avr >= 80) {
		printf("B학점\n");
	}
	else if (avr >= 70) {
		printf("C학점\n");
	}
	else if (avr >= 50) {
		printf("D학점\n");
	}
	else {
		printf("F학점\n");
	}
}