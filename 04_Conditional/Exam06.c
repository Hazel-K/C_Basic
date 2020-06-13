// Exam06.c

#include <stdio.h>

void main() {
	// switch ~ case 사용
	/*
		- 하나의 조건으로 많은 경우의 수를 처리
			1. 조건식의 결과는 정수만 허용
			2. case문의 값은 정수 상수만 가능하며 중복 불가
		- break;
			> switch문을 빠져나간다.
			> case를 만족하고 수행했는데 break;가 없으면
			그 아래 있는 모든 case는 만족한 것으로 간주하고 다 수행
			(break;를 만나거나 switch가 끝날 때까지)
	*/
	int iNum = 0;
	printf("=======================\n");
	printf("[재미있는 프로그래밍!\n]");
	printf("1. C언어!\n]");
	printf("2. PYTHON!\n]");
	printf("2. JAVA!\n]");
	printf("=======================\n");
		 
	printf("공부할 언어를 입력하세요 : ");
	scanf("%d", &iNum);

	switch (iNum) // 조건식 (연산도 가능하나 결과는 정수여야 한다)
	{
		case 1: 
			printf("선택한 언어는 C언어입니다.\n");
			break;
		case 2: 
			printf("선택한 언어는 PYTHON입니다.\n");
			break;
		case 3:
			printf("선택한 언어는 JAVA입니다.\n");
			break;
		
		default :
			printf("잘못 입력하였습니다.(%d)\n", iNum);
	}

	// 위 switch ~ case문을 if 문으로 변경
	/*if (iNum == 1) {
		printf("선택한 언어는 C언어입니다.\n");
	}
	else if (iNum == 2) {
		printf("선택한 언어는 PYTHON입니다.\n");
	}
	else if (iNum == 3) {
		printf("선택한 언어는 JAVA입니다.\n");
	}
	else {
		printf("잘못 입력하였습니다.(%d)\n", iNum);
	}*/
}