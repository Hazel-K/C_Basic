// Exam03.c

#include <stdio.h>

void main() {
	/*
		3. 진수 표현
			10진수 : 그냥 쓴다.
			8진수  : 숫자 앞에 0을 붙인다.
			16진수 : 숫자 앞에 0x를 붙인다.
	*/

	int iValue1 = 10;
	int iValue2 = 010;
	int iValue3 = 0x10;

	printf("iValue1 = %d\n", iValue1);
	printf("iValue2 = %d\n", iValue2);
	printf("iValue3 = %#d\n\n", iValue3);
	// 서식문자 옵션에 #을 사용하면 어떤 진수인지 함께 출력한다.

	printf("iValue1 = %o\n", iValue1);
	printf("iValue2 = %o\n", iValue2);
	printf("iValue3 = %#o\n\n", iValue3);
	// 8진수로 표시

	printf("iValue1 = %x\n", iValue1);
	printf("iValue2 = %x\n", iValue2);
	printf("iValue3 = %#x\n\n", iValue3);
	// 16진수로 표시
}