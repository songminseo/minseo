#include <stdio.h>

int main(void) {
	int num, hour, min, sec;

	printf("초를 입력 : ");
	scanf("%d", &num);

	hour = num / 3600;
	min = (num % 3600) / 60;
	sec = (num % 3600) % 60;

	printf("%d시 %d분 %d초 \n", hour, min, sec);
	
	return 0;
}