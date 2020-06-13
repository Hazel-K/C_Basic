// Exam03.c

#include <stdio.h>

void main() {
	/*
		단항연산자
		항이 하나뿐인 연산자. 피연산자가 1한개

			1. 증감연산자 ( ++, -- )
			피연산자의 값을 1 증가 혹은 감소

			2. 부호연산자
			피연산자의 값에 부호를 적용 (- 만 적용)
	*/
	int iNum1 = 10;
	int iNum2 = -10; // - 기호가 부호연산자(10을 음수로 만들어 iNum2에 대입)
	int iNum3 = 0;

	printf("iNum1++ = %d\n", iNum1++); // 후위증감
	printf("iNum1 = %d\n", iNum1);
	printf("++iNum1 = %d\n", ++iNum1); // 전위증감
	printf("iNum1 = %d\n", iNum1);
	// 후위증감 : 피연산자를 사용한 뒤 값을 증감
	// 전위증감 : 피연산자의 값을 증감한 뒤 사용

	iNum3 = iNum1++; // iNum1의 값은 iNum3에 대입되는데 사용 후 13이 된다.
	printf("iNum3 = %d\n", iNum3);
	printf("iNum1 = %d\n", iNum1);

	// 부호연산자
	printf("iNum2 = %d\n", iNum2);
	printf("-iNum2 = %d\n", -iNum2); // 부호 연산 사용
	// 증감연산자는 피연산자의 값을 실제로 변경시킨다.
	// 부호연산자를 포함한 일반적인 연산자들은 피연산자의 값을 가져다가 사용만 해서 결과값을 얻어낸다.
}