// Exam05.c

#include <stdio.h>

void main() {
	// 입력된 점수에 따라 학점 출력
	int iScore = 0;
	printf("숫자 입력 : ");
	scanf("%d", &iScore);
	
	// 90 : A학점 80 : B학점 70 : C학점 70 : F학점
	if (iScore >= 90) {
		if (iScore == 100)
			printf("(만점!)");
		printf("A 학점\n");
		}
	}
	else if (iScore >= 80) {
		printf("B 학점\n");
	}
	else if (iScore >= 70) {
		printf("C 학점\n");
	}
	else {
		if (iScore == 0) {
			printf("(빵점!)F 학점\n");
		} else {
		printf("F 학점\n");
		}
	}
}