// Exam05.c

#include <stdio.h>

void main() {
	/*
		논리연산자
			- 조건문, 반복문의 조건식에서 사용
			- 조건 만족 : 정수 0 반환, True
			- 조건 불만족 : 정수 1 반환, False

			1. AND 연산 &&	: 둘다 참이면 참, 하나라도 거짓이면 거짓
			2. OR 연산 ||	: 둘중 하나라도 참이면 참, 둘다 거짓을 경우에만 거짓
			3. 논리부정 !	: 참/거짓의 결과를 반대로 바꾼다
	*/
	printf("1. && 결과 : %d\n", (10 > 0) && (20 > 0));
	printf("2. && 결과 : %d\n", (10 < 0) && (20 > 0)); // AND 연산은 좌측식이 거짓이면 우측식을 연산하지 않는다.

	printf("3. || 결과 : %d\n", (10 > 0) || (20 < 0)); // OR 연산은 좌측식이 참이면 우측식을 연산하지 않는다.
	// OR, AND 연산을 사용할 때 좌측에 참이나 거짓이 될 확률이 높은 식을 사용하면 리소스 절감에 도움이 된다.

	printf("4. ! 결과 : %d\n", !(10 > 0) && (20 > 0));
	printf("5. ! 결과 : %d\n", !((10 < 0) && (20 > 0)));
	// 4. && 연산 이전에 좌측의 결과를 부정
	// 5. && 연산 이후에 전체의 결과를 부정
	// 소괄호()의 위치에 따라 완전히 다른 해석 결과가 나옴
}