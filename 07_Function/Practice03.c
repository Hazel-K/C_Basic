/*
	���ȣ���� �̿��Ͽ� ���丮�� �Լ� �����

		���丮��(factorial) : 1���� Ư�� ������ ������ ��� ���� ��
			3! = 3 * 2 * 1
			5! = 5 * 4 * 3 * 2 * 1

			5! = 5 * 4!
			   = 5 * 4 * 3!
			   = 5 * 4 * 3 * 2!
			   = 5 * 4 * 3 * 2 * 1!(1)

			n! = n * (n-1)!
		
		�Լ�
			��� : ���޵� ������ ���丮���� ���� ���� ��ȯ
			�Լ��� : GetFactorial

		[��°��]
		���ڸ� �Է��ϼ��� : 5
		5! = 120
*/
#include <stdio.h>

int GetFactorial(int iNum);

void main()
{
	int iNum = 0;
	int iSum = 1;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &iNum);
	
	printf("%d! = %d\n", iNum, GetFactorial(iNum));

	// �ݺ������� ������ ���
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