#include <stdio.h>

int main(void) {
	// 크림3개(4개) 새우 2개(3개) 콜라 4개(5개) 
	int num, cream=4, shrimp=3, drink=5;

	printf("얼마 갖고 있나요 : ");
	scanf("%d", &num);
	
	while (shrimp >= 1) {
		cream = 4;
		while (cream >= 1) {
			drink = 5;
			while (drink >= 1) {
				if (cream * 500 + shrimp * 700 + drink * 400 == num) {
					printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개 \n", cream, shrimp, drink);
				}
				drink--;
			}
			cream--;
		}
		shrimp--;
	}
	
	return 0;
}