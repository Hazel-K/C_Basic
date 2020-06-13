/*
	많이살 수록 할인을 많이 해줘요!!
	구매한 가격을 입력받고, 금액에 따라 할인율을 적용하자
	10000원 이상 - 5%
	50000원 이상 - 10%
	100000원 이상 - 20%

	[출력결과]
	총 구매액을 입력해주세요 : 50000
	최종 결제액은 45000원 입니다.

	총 구매액을 입력해주세요 : 5000
	최종 결제액은 5000원 입니다.
	10000원 이상 구매 시 할인되니 많이 사주세요^^ 
*/
#include <stdio.h>

void main() {
	/*int iTotal = 0;
	printf("총 구매액을 입력해주세요 : ");
	scanf("%d", &iTotal);
	
	if (iTotal < 10000) {
		printf("최종 결제액은 %d입니다\n10000원 이상 구매 시 할인되니 많이 사주세요^^\n", iTotal);
	} else {
	switch (iTotal / 1000)
	{
	case 1:
	case 2:
	case 3:
	case 4:
		printf("최종 결제액은 %d입니다\n", (iTotal * 0.95));
		break;
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		printf("최종 결제액은 %d입니다\n", (iTotal * 0.9));
		break;
	default:
		printf("최종 결제액은 %d입니다\n", (iTotal * 0.8));
	}
	}*/

	int iPay = 0;
	printf("총 구매액을 입력해주세요 : ");
	scanf("%d", &iPay);

	if (iPay >= 100000) {
		printf("최종 결제액은 %d입니다\n", (iPay * 0.8));
	}
	else if (iPay >= 50000) {
		printf("최종 결제액은 %d입니다\n", (iPay * 0.9));
	}
	else if (iPay >= 10000) {
		printf("최종 결제액은 %d입니다\n", (iPay * 0.95));
	}
	else {
		printf("최종 결제액은 %d입니다\n10000원 이상 구매 시 할인되니 많이 사주세요^^\n", iPay);
	}
}