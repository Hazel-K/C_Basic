// Exam01.c

#include <stdio.h>

void main() {
	int iValue = 0;

	// 1번
	if (iValue == 0) {
		printf("1. iValue == 0\n\n");
	}

	// 2번
	if (iValue != 0) {
		printf("2. iValue != 0\n\n");
	}

	// 3번
	if (!(iValue == 0)) {
		printf("3. !(iValue == 0)\n\n");
	}

	// 4번
	if (!(iValue != 0)) {
		printf("4. !(iValue != 0)\n\n");
	}

	// 5번;수행문 코드가 한 줄이면 중괄호 생략 가능
	if (iValue == 0)
		printf("5. iValue == 0\n\n");

	// 6번;수행문 코드가 한 줄이면 중괄호 생략하고 같은줄에 기입 가능
	if (iValue != 0) printf("6. iValue != 0\n\n");

	// 7번
	if (!(iValue != 0))
		printf("7. !(iValue != 0)\n");
		printf("나는 7번의 수행문!!\n"); // if문과 상관없음
}