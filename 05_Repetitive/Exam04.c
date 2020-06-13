// Exam04.c

#include <stdio.h>

void main() {
	/*
		2중 for문 - 별(*) 찍기
		*****
		*****
		*****
		*****
		*****
	*/
	int i, j = 0;

	printf("1. 반복문 없이 그냥 출력\n");
	printf("*****\n");
	printf("*****\n");
	printf("*****\n");
	printf("*****\n");
	printf("*****\n");

	printf("\n2. for문 한 개 사용\n");
	for (i = 0; i < 5; i++)
	{
		printf("*****\n");
	}

	printf("\n3. for문 두 개 사용\n"); // 1번 출력 시 * 1개 출력
	for (i = 0; i < 5; i++) // 1회 수행 = 1줄 출력
	{
		for (j = 0; j < 5; j++) // 1회 수행 = 별 1개 출력
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n4. for문 한 개 사용\n"); // 1번 출력 시 * 1개 출력, 총 몇 개 출력? 25 언제 개행? 5개 마다
	for (i = 1; i < 26; i++)
	{
		printf("*");
		if (i % 5 == 0)
		{
			printf("\n");
		}
	}
	// 중첩 반복문은 대부분 조건문으로 대체할 수 있다.
}