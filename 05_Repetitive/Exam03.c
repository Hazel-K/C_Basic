// Exam03.c

#include <stdio.h>

void main() {
	// for문 중첩 : 2중 for문
	// 3중 for문부터는 사용하지 않는다고 생각

	int i, j, k = 0;
	printf("i j\n=====\n");

	for (i = 0; i < 3; i++) // i : 0, 1, 2 수행, 3 끝
	{
		for (j = 0; j < 3; j++) // j : 0, 1, 2 수행, 3 끝
		{
			printf("%d %d\n", i, j);
		}
	}

	printf("\ni j k\n=====\n");
	for (i = 0; i < 3; i++) // i : 0, 1, 2 수행, 3 끝
	{
		for (j = 0; j < 3; j++) // j : 0, 1, 2 수행, 3 끝
		{
			for (k = 0; k < 3; k++) // k : 0, 1, 2 수행, 3 끝
			{
				printf("%d %d %d\n", i, j, k);
			}
		}
	}
}