#include <stdio.h>

int main(void) {

	int num = 0, res=0;

	do {
		res += num;
		num+=2;
	} while (num <= 100);

	printf("%d\n", res);

	return 0;
}