#include <stdio.h>

int main(void) {

	int num=1, res=0, i=1;

	while (num!=0) {
		printf("���� ������ �ϳ� �Է��Ͻÿ� : ");
		scanf("%d", &num);
		res += num;
		i++;
	}
	printf("%d \n", res);
	return 0;
}