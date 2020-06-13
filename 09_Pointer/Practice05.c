// Practice05.c

#include <stdio.h>

void main()
{
	// 로또 당첨 판별기

	int iDreamNum[6] = { 5, 8, 10, 23, 30, 42 }; // 가상의 1등번호 (알아서 넣기)
	int iMyNum[6]	 = { 1, 2, 3, 4, 5, 6 }; // 가상의 내 구매 번호 (알아서)
	int iCount		 = 0; // 일치하는 번호 개수

	iCount = CheckLotto( ???, ??? ); // 함수에서 2개 배열의 일치하는 숫자 개수 반환

	printf("일치하는 개수는 %d개 입니다.\n", iCount);
}