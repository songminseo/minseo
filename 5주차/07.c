#include <stdio.h>

int main(void) {
	int num, hour, min, sec;

	printf("�ʸ� �Է� : ");
	scanf("%d", &num);

	hour = num / 3600;
	min = (num % 3600) / 60;
	sec = (num % 3600) % 60;

	printf("%d�� %d�� %d�� \n", hour, min, sec);
	
	return 0;
}