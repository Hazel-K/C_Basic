// Practice01.c

/*
	두 개의 정수를 입력 받고, 큰 수에서 작은 수를 뺀 결과를 출력
		> main()에서 두 수를 입력 받고, 함수를 통해 결과 출력
	
	함수 : int Calc(int iNum1, int iNum2)
*/

#include <stdio.h>
//[선언]
int iSub(int iN1, int iN2);

void main()
{
	int i1 = 0, i2 = 0;
	printf("두 수 입력 : ");
	scanf("%d %d", &i1, &i2);

	printf("결과값 : %d\n", iSub(i1, i2));
}
//[정의]
int iSub(int iN1, int iN2)
{
	if (iN1 > iN2) 
	{
		return iN1 - iN2;
	}
	else if (iN2 > iN1)
	{
		return iN2 - iN1;
	} /*else {
		return NULL;
	}*/
}

/*
int Calc (int iN1, int iN2)
{
	int iResult = 0;
	iResult = iN1 - iN2; // 첫 번째 숫자에서 두 번째 숫자를 뺀다.
	
	if (iResult < 0) // 결과값이 음수일 경우
	{
		iResult = -iResult; // 양수로 변환
	}
	return iResult;
}
*/