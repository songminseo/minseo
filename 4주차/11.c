#include <stdio.h>

int main(void) {

	int num, temp, op;
	float res = 0;

	printf("���� �� �� �Է��ϽǷ��� : ");
	scanf("%d", &num);
	
	for (temp = num; temp > 0; temp--) {
		printf("\n%d��° ������ �Է��ϼ��� : ", num - temp + 1);
		scanf("%d", &op);
		res += op;
	}
	printf("\n\n�Է��� ������ ����� %f�Դϴ�. \n", res/num);

	return 0;
}