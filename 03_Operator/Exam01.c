// Exam01.c

#include <stdio.h>

void main() {
	// 산술연산자(사칙연산)
	int iNum1 = 10;
	int iNum2 = 3;

	// 연산을 수행한다 ==> 하나의 값을 만든다.
	// 내가 어떠한 연산을 수행할 때 그 원하는 하나의 값을 소괄호로 묶어준다.
	
	printf("%d + %d = %d\n", iNum1, iNum2, (iNum1 + iNum2));
	printf("%d - %d = %d\n", iNum1, iNum2, (iNum1 - iNum2));
	printf("%d * %d = %d\n", iNum1, iNum2, (iNum1 * iNum2));
	printf("%d / %d = %d\n", iNum1, iNum2, (iNum1 / iNum2));
	// 정수와 정수의 연산 결과는 무조건 정수이다.
	// iNum1 / iNum2 --> 10 / 3 의 결과값은 3.33333 이지만, 정수라서 3이 나온다.

	printf("%d %% %d = %d\n", iNum1, iNum2, (iNum1 % iNum2));
	// % : 나머지를 구하는 연산자
	// 1. 나머지 연산 (뒤에서 자주 쓰임)
	// 2. 연산을 수행하면 바로 결과값이 나온다.
	// 10 / 3 --> 3이란 결과가 나왔기 때문에 %f로 출력할 수 없다.
}
