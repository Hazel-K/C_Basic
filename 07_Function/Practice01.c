// Practice01.c

/*
	�� ���� ������ �Է� �ް�, ū ������ ���� ���� �� ����� ���
		> main()���� �� ���� �Է� �ް�, �Լ��� ���� ��� ���
	
	�Լ� : int Calc(int iNum1, int iNum2)
*/

#include <stdio.h>
//[����]
int iSub(int iN1, int iN2);

void main()
{
	int i1 = 0, i2 = 0;
	printf("�� �� �Է� : ");
	scanf("%d %d", &i1, &i2);

	printf("����� : %d\n", iSub(i1, i2));
}
//[����]
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
	iResult = iN1 - iN2; // ù ��° ���ڿ��� �� ��° ���ڸ� ����.
	
	if (iResult < 0) // ������� ������ ���
	{
		iResult = -iResult; // ����� ��ȯ
	}
	return iResult;
}
*/