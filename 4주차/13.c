#include <stdio.h>

int main(void) {

	int num = 5, line = 1;

	while (line <= 5) {
		num = line;
		while (num > 1) {
			printf("��");
			num--;
		}
		line++;
		printf("#\n");
	}

	

	return 0;
}

// 1��° : �� 0ȸ, �� 1ȸ
// 2��° : �� 1ȸ, �� 1ȸ
// 3��° : �� 2ȸ, �� 1ȸ
// n��° : �� (n-1)ȸ, �� 1ȸ
