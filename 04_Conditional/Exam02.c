// Exam02.c

#include <stdio.h>

void main() {
	//if, else 사용
	int iNum = 0;
	printf("숫자 입력 : ");
	scanf("%d", &iNum);
	
	// 입력한 숫자가 0인지 아닌지 판별
	// 조건문1; 조건문이 iNum != 0인 반대 if문도 작성 가능하다.
	if (iNum == 0) {
		printf("1-1) 0이다.\n");
	}
	else {
		printf("1-2) 0이 아니다.\n");
	}
	// 현재 코드는 2개의 조건문이 존재
	// 하나의 조건문에는 경우의 수가 2개씩 있다.
	// else는 무조건이지만, 조건없이 수행하라는 것도 하나의 조건이 된다.
}