// Exam01.c

#include <stdio.h>

void main() {
	// for문을 이용하여 1 ~ 10까지의 합 구하기
	int i = 0;
	int iSum = 0;
	for (i = 1; i < 11; i++)
	{
		iSum += i; // 혹은 iSum = iSum + i;
		/*
			iSum = 0 + 1 ; --> iSum = 1
			iSum = 1 + 2 ; --> iSum = 3
			iSum = 3 + 3 ; --> iSum = 6
			iSum = 6 + 4 ; --> iSum = 10
			iSum = 10 + 5 ; --> iSum = 15
			iSum = 15 + 6 ; --> iSum = 21
			iSum = 21 + 7 ; --> iSum = 28
			iSum = 28 + 8 ; --> iSum = 36
			iSum = 36 + 9 ; --> iSum = 45
			iSum = 45 + 10 ; --> iSum = 55
		*/
	}
		printf("1~10까지의 합은 %d입니다.\n", iSum);
}