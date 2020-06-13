// Exam01.c

#include <stdio.h>

// 선언
int getSum(int iNum);

void main() {
	int iInput = 0;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &iInput);

	printf("1~%d까지의 합 : %d\n", iInput, getSum(iInput));
}

// 정의 : 1부터 전달된 1개의 숫자까지의 합을 구해서 반환
int getSum(int iNum) {
	int i = 0;
	int iSum = 0;

	for (i = 1; i <= iNum; i++) {
		iSum += i;
	}
	return iSum;
}