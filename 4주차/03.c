#include <stdio.h>

int main(void) {
	int kor, eng, math, avr;
	printf("����, ����, ���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d %d", &kor, &eng, &math);
	
	avr = (kor + eng + math) / 3;

	printf("��� ���� %d\n", avr);

	if (avr >= 90) {
		printf("A����\n");
	}
	else if (avr >= 80) {
		printf("B����\n");
	}
	else if (avr >= 70) {
		printf("C����\n");
	}
	else if (avr >= 50) {
		printf("D����\n");
	}
	else {
		printf("F����\n");
	}
}