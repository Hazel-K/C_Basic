// Exam03.c

#include <stdio.h>

void main() {
	// if, else if, else 사용
	int iNum = 0;
	printf("숫자 입력 : ");
	scanf("%d", &iNum);

	// 입력한 숫자의 양수, 음수, 0 판별
	if (iNum > 0) {
		printf("양수입니다.\n");
	}
	else if (iNum == 0) {
		printf("0입니다.\n");
	}
	else {
		printf("음수입니다.\n");
	}
}