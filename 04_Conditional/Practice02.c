/*
	홀수 짝수 판별기
		2로 나눴을 때 나머지가 0이면 짝수, 1이면 홀수이다.
		0은 나머지가 0으로 나와서 짝수로 판별되지만, 살짝 애매하다!!
		0을 입력했을 땐 추가로 "0은 애매해요~!" 문구 출력!

	[출력결과]
	정수를 입력해주세요 : 0
	입력하신 0은(는) 짝수입니다.
	0은 애매해요~!

	정수를 입력해주세요 : 1
	입력하신 1은(는) 홀수입니다.
*/
#include <stdio.h>

void main() {
	/*int iV = 0;
	printf("정수를 입력해주세요 : ");
	scanf("%d", &iV);
	if (iV == 0) {
		printf("0은 애매해요~!\n");
	} else {
	switch (iV % 2)
	{
	case 0:
		printf("입력하신 0은(는) 짝수입니다.\n");
		break;
	case 1:
		printf("입력하신 1은(는) 홀수입니다.\n");
		break;
	// default: printf("0은 애매해요~!\n");
	}
	}*/

	int iNum = 0;
	printf("정수를 입력해주세요 : ");
	scanf("%d", &iNum);

	if (iNum % 2 == 0) {
		printf("입력하신 %d은(는) 짝수입니다.\n", iNum);
		if (iNum == 0) {
			printf("0은 애매해요~!\n");
		}
	}
	else {
		printf("입력하신 %d은(는) 홀수입니다.\n", iNum);
	}
}
