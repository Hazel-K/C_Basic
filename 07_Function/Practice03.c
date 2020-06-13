/*
	재귀호출을 이용하여 팩토리얼 함수 만들기

		팩토리얼(factorial) : 1부터 특정 수까지 정수를 모두 곱한 것
			3! = 3 * 2 * 1
			5! = 5 * 4 * 3 * 2 * 1

			5! = 5 * 4!
			   = 5 * 4 * 3!
			   = 5 * 4 * 3 * 2!
			   = 5 * 4 * 3 * 2 * 1!(1)

			n! = n * (n-1)!
		
		함수
			기능 : 전달된 숫자의 팩토리얼을 구한 값을 반환
			함수명 : GetFactorial

		[출력결과]
		숫자를 입력하세요 : 5
		5! = 120
*/
#include <stdio.h>

int GetFactorial(int iNum);

void main()
{
	int iNum = 0;
	int iSum = 1;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &iNum);
	
	printf("%d! = %d\n", iNum, GetFactorial(iNum));

	// 반복문으로 제작할 경우
	for (; iNum > 0; iNum--)
	{
		iSum *= iNum;
	}
	printf("%d\n", iSum);
}

int GetFactorial(int iNum)
{
	if (iNum == 0)
	{
		return 1;
	}
	else
	{
		return iNum * (GetFactorial(iNum - 1));
	}
}