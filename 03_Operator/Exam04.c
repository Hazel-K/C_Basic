// Exam04.c

#include <stdio.h>

void main() {
	/*
		비교연산자
			- 조건문, 반복문의 조건식에서 사용
			- 조건 만족 : 정수 1반환, True
			- 조건 불만족 : 정수 0 반환, False
				> C언어에서 0이 아닌 모든 값을 참으로 간주한다.
				> 1이 참을 의미하는 대표적인 값

			1. 등가비교 : 두 값이 같은지 다른지 비교 == !=
			2. 대소비교 : 두 값의 크기 비교 > < >= <=
	*/
	int iNum1 = 5;
	int iNum2 = 5;
	
	// 등가비교
	printf("iNum1 == iNum2 : %d\n", (iNum1 == iNum2)); // 좌측값과 우측값이 같느냐고 묻고 있음
	printf("iNum1 != iNum2 : %d\n", (iNum1 != iNum2)); // 좌측값과 우측값이 다르냐고 묻고 있음

	// 대소비교
	printf("iNum1 > iNum2 : %d\n", (iNum1 > iNum2)); // 좌측값이 우측값보다 크냐고 묻고 있음
	printf("iNum1 < iNum2 : %d\n", (iNum1 < iNum2)); // 좌측값보다 우측값이 크냐고 묻고 있음
	printf("iNum1 >= iNum2 : %d\n", (iNum1 >= iNum2)); // 좌측값이 우측값보다 크거나 같냐고 묻고 있음
	printf("iNum1 <= iNum2 : %d\n", (iNum1 <= iNum2)); // 좌측값보다 우측값이 크거나 같냐고 묻고 있음
}