#include <stdio.h>

int main(void) {
	int num = 2, i = 10, temp = 2;
	
	while (i > 0) {
		while (temp < num) {
			if (num % temp != 0)
				temp++;
			else {
				num++;
				temp = num;
			}
		}

		if (temp != num) {
			printf("num : %d ", num);
		}
		printf("temp : %d \n", temp);
		i--;
	}
	temp = 2;
	return 0;
}