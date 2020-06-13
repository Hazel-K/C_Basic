// Exam07.c

#include <stdio.h>

void main() {
	// switch ~ case 응용
	// 월을 입력받아서 계절을 출력
	int iMonth = 0;
	printf("현재 월을 입력하세요 : ");
	scanf("%d", &iMonth);

	switch (iMonth) {
	case 3:
	case 4:
	case 5:
		printf("봄\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("여름\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("가을\n");
		break;
	case 12:
	case 1:
	case 2:
		printf("겨울\n");
		break;
	default:
		printf("잘못 입력하였습니다. (%d)\n", iMonth);
	}
}