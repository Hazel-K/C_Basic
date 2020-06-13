/*
	Exam05 의 성적 판별을 switch~case 문으로!!
        hint : (정수 / 정수) 의 결과 활용! case, default문 이용
*/
#include <stdio.h>

void main() {
	int iS1 = 0;
	printf("점수 입력 : ");
	scanf("%d", &iS1);

	switch (iS1 / 10)
	{
	case 10:
		printf("(만점)A학점\n");
		break;
	case 9:
		printf("A학점\n");
		break;
	case 8:
		printf("B학점\n");
		break;
	case 7:
		printf("C학점\n");
		break;
	
	default:
		if (iS1 == 0) {
			printf("(빵점)\n");
		}
		printf("F학점\n");
		//break;
	}
}