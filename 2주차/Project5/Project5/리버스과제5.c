#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;
	char score;

	printf("학점을 입력하세요:");
	scanf("%c", &score );
	printf("국어성적입력:");
	scanf("%d", &x);
	printf("수학성적입력");
	scanf("%d", &y);
	printf("영어성적입력:");
	scanf("%d", &z);

	printf("총점 : %d\n", x + y + z);
	printf("평균 : %d\n", (x+y+z) / 3);
	return 0;
}