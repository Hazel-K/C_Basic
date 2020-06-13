// Exam02.c

#include <stdio.h>

void main() {
	// 2. 실수형 (소수)
	float fValue = 2.2f; // 실수 상수를 표기할 때 f를 붙이면 float이 된다.
	double dValue = -3.3666666666666; // 아무것도 붙이지 않으면 double

	printf("fValue = %f\n", fValue); // 기본 소수점은 6자리까지 출력된다
	printf("dValue = %f\n", dValue); // 7자리에서 자동으로 반올림된다

	printf("dValue = %f\n", dValue); // [.m] : 소수점 지정
	printf("dValue = %.2f\n", dValue); // [.2] : 소수점을 2자리로 지정
}