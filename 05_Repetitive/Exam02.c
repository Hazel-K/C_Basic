// Exam02.c

#include <stdio.h>

void main() {
	// continue와 break
	int i = 0;

	// continue
	for (; i <= 2; i++)
	{
		if (i == 1)
		{
			continue; // 이 순간 새로운 증감식으로 점프, 수행문이 끝나는 새로운 지점
		}
		printf("%d\n", i); //원래 수행문이 끝나는 지점
	}
	printf("===\n");

	// break
	for (i = 0; i <= 2; i++) // 앞선 식에서 변경된 i값을 재설정
	{
		if (i == 1)
		{
			break; // 이 순간 새로운 증감식으로 점프, 수행문이 끝나는 새로운 지점
		}
		printf("%d\n", i); //원래 수행문이 끝나는 지점
	}
}