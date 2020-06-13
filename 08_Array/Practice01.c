// Practice01.c

#include <stdio.h>

void main()
{
	// 배열 모든 요소의 합 출력하기
	int iArr[] = {1,2,3,4,5,6,7,8,9,10};
	int iArrLen = 0;
	int iSum = 0;

	iArrLen = sizeof(iArr) / sizeof(iArr[0]);
	for (int i = 0; i < iArrLen; i++) {
		iSum += iArr[i];
	}

	printf("모든 요소의 합은 %d입니다.\n", iSum);
}