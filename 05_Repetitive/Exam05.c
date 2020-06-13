// Exam05.c

#include <stdio.h>

void main() {
	/*
		2중 for문 : 별(*) 찍기
			- 입력된 줄 만큼 아래와 같이 출력
			[출력결과]
			숫자 입력 : 5
			*
			**
			***
			****
			*****
	*/
	int i, j, k = 0;
	printf("숫자 입력 : ");
	scanf("%d", &k);

	for (i = 0; i < k; i++)
	{
		for (j = 0; j <= i ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}