#include <stdio.h>

int main(void) {
	// ũ��3��(4��) ���� 2��(3��) �ݶ� 4��(5��) 
	int num, cream=4, shrimp=3, drink=5;

	printf("�� ���� �ֳ��� : ");
	scanf("%d", &num);
	
	while (shrimp >= 1) {
		cream = 4;
		while (cream >= 1) {
			drink = 5;
			while (drink >= 1) {
				if (cream * 500 + shrimp * 700 + drink * 400 == num) {
					printf("ũ���� %d��, ����� %d��, �� �� %d�� \n", cream, shrimp, drink);
				}
				drink--;
			}
			cream--;
		}
		shrimp--;
	}
	
	return 0;
}