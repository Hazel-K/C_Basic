// Exam02.c

/*
	사칙연산을 하는 함수 선언/정의 후 main()에서 호출
		> 덧셈, 뺄셈, 곱셈, 나눗셈 4개 함수 만들기
		> 매개변수나 반환타입은 자유롭게
		> 단, 연산은 함수 내부에서 수행
*/

#include <stdio.h>

int iSum(int iNum1, int iNum2);
int iMin(int iNum1, int iNum2);
int iMul(int iNum1, int iNum2);
int iDiv(int iNum1, int iNum2);

void main() {
	int iNum1 = 0, iNum2 = 0;
	printf("두 수 입력 : ");
	scanf("%d %d", &iNum1, &iNum2);
	printf("%d + %d = %d\n", iNum1, iNum2, iSum(iNum1, iNum2));
	printf("%d - %d = %d\n", iNum1, iNum2, iMin(iNum1, iNum2));
	printf("%d * %d = %d\n", iNum1, iNum2, iMul(iNum1, iNum2));
	printf("%d / %d = %d\n", iNum1, iNum2, iDiv(iNum1, iNum2));
}

int iSum(int iNum1, int iNum2) 
{
	return iNum1 + iNum2;
}

int iMin(int iNum1, int iNum2)
{
	return iNum1 - iNum2;
}

int iMul(int iNum1, int iNum2)
{
	return iNum1 * iNum2;
}

int iDiv(int iNum1, int iNum2)
{
	return iNum1 / iNum2;
}