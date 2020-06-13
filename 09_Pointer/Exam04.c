// Exam04.c

#include <stdio.h>

void PrintArr(int * pArr, int iArrLen);

void main()
{
	// 배열과 포인터의 관계를 배웠다.
	// --> 함수에서 외부 배열을 다룰 수 있다.
	int iArr1[5] = { 10, 20, 30, 40, 50 };
	int iArr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int iArrLen = 0;

	iArrLen = sizeof(iArr1) / sizeof(iArr1[0]);
	PrintArr(iArr1, iArrLen);

	iArrLen = sizeof(iArr2) / sizeof(iArr2[0]);
	PrintArr(iArr2, iArrLen);
}

void PrintArr(int * pArr, int iArrLen) // 길이는 전달받아야만 알 수 있다.
{
	int i = 0;
	// int iArrLen = 0;
	// iArrLen = sizeof(pArr) / sizeof(pArr[0]); // 이런 식으로는 사용 불가능
	
	printf("배열의 모든 요소 : ");
	for (i = 0; i < iArrLen; i++)
	{
		printf("%d ", pArr[i]);
	}
	printf("\n");
}