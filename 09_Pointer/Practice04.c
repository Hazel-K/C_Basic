// Practice04.c

/*
	별점 출력기
		- 점수 5점당 별 1개씩 그리기
			> 남는 점수는 버리기

		1. 배열에 점수 입력 받기
		2. 배열과 배열의 크기를 전달 받은 함수에서 별 출력

	[출력결과]
	(51점) **********						<-- 10개
	(13점) **								<-- 2개
	(75점) ***************					<-- 15개
	(2점)									<-- 0개
	(24점) ****								<-- 4개
*/

#include <stdio.h>

// 선언
void PrintStar( int * pArr, int iArrLen );

void main()
{
	int iArrScore[5] = {51, 13, 75, 2, 24};  // 초기 값은 알아서 넣기

	PrintStar( ????? );	 // 함수 완성하기
}