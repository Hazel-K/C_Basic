// Practice03.c

#include <stdio.h>

void main()
{
	int iArr[5]	= {0, };
	int iMaxValue	= 0;
	int i = 0;

	// iArr 배열에 숫자 5개를 입력 받기
	printf("숫자 5개 입력 : ");
	for( i = 0; i < 5; i++ )
	{
		scanf("%d", ???); // - 여기도 완성하기
	}
	
	// 함수에 배열을 전달하여 가장 큰 값을 반환 받기  - 함수 완성하기
	iMaxValue = FindMaxValue( ????????? );

	printf("가장 큰 값은 %d 입니다.\n", iMaxValue);

}