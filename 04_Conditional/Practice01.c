/*
	3과목 점수를 입력받아 평균 점수가 60점 이상이면 합격, 아니면 불합격

	[출력결과]
	점수를 차례대로 입력해주세요 : 60 60 60
	합격
*/
#include <stdio.h>

void main() {
	/*int iClass1, iClass2, iClass3 = 0;
	printf("점수를 차례대로 입력해주세요 : ");
	scanf("%d %d %d", &iClass1, &iClass2, &iClass3);
	switch ((iClass1 + iClass2 + iClass3) / 10)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("불합격\n");
		break;
	default:
		printf("합격\n");
		//break;
	}*/

	int iScore1, iScore2, iScore3 = 0;
	float iAvg = 0;
	printf("점수를 차례대로 입력해주세요 : ");
	scanf("%d %d %d", &iScore1, &iScore2, &iScore3);
	iAvg = (iScore1 + iScore2 + iScore3) / 3;

	if (iAvg >= 60) {
		printf("합격!\n");
	}
	else {
		printf("불합격\n");
	}
}