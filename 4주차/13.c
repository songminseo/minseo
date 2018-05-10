#include <stdio.h>

int main(void) {

	int num = 5, line = 1;

	while (line <= 5) {
		num = line;
		while (num > 1) {
			printf("○");
			num--;
		}
		line++;
		printf("#\n");
	}

	

	return 0;
}

// 1번째 : 원 0회, 별 1회
// 2번째 : 원 1회, 별 1회
// 3번째 : 원 2회, 별 1회
// n번째 : 원 (n-1)회, 별 1회
