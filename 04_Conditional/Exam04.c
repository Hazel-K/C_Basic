// Exam04.c

#include <stdio.h>

void main() {
	// if문 중첩 : if문 수행문 안에 또다른 if문을 사용
	int iNum = 0;
	printf("숫자 입력 : ");
	scanf("%d", &iNum);

	// 입력한 숫자의 양수, 음수, 0 판별
	if (iNum > 0) {
		printf("양수입니다.\n");
	}
	else {
		// 새로운 지역
		// 지역안에서는 main() 함수 안에 사용할 수 있는 모든 코드를 동일하게 작성할 수 있음.
		if (iNum < 0) {
			printf("음수입니다.\n");
		}
		else {
			printf("0입니다.\n");
		}
	}
}