// Exam02.c

// �����͸� ����ϴ� ����?
// 1. �Լ��� ���๮���� �Լ� �ܺ��� ������ ����
// 2. �����Ҵ� Ȱ�� �� �ʿ�

#include <stdio.h>

void SwapValue(int iNum1, int iNum2);
void SwapRef(int * pNum1, int * pNum2);

void main()
{
	/*
		�Լ����� �Ű������� ���� ���� ���޹޴� ���
			1. Call by Value
				- ���� ���� ȣ��
				- ���±��� �Լ��� ȣ���ߴ� �⺻ ����
				- ���� '��'�� ���޹޴´�.

			2. Call by Reference (Address)
				- ����(�ּ�)�� ���� ȣ��
				- �����ͺ����� �Ű������� Ȱ���Ͽ� �ּҰ��� �޴´�.
					> �Լ� �ܺ��� ������ ������ �� �ִ�.
	*/
	int iNum1 = 100;
	int iNum2 = 200;

	SwapValue(iNum1, iNum2); // �� ������ ���� �ٲ��ִ� �Լ�
	printf("SwapValue ȣ�� ��, iNum1(%d), iNum(%d)\n", iNum1, iNum2);
	// SwapValue ȣ�� ��, �� ������ ����� ���� ���� ����
	// iNum1, iNum2�� ���� ��������� ������ ������ ����.

	SwapRef(&iNum1, &iNum2);
	printf("SwapRef ȣ�� ��, iNum1(%d), iNum(%d)\n", iNum1, iNum2);
}

void SwapValue(int iNum1, int iNum2)
{
	int iTemp = iNum1; // �ӽð����� iNum1�� ���� ����
	iNum1 = iNum2;
	iNum2 = iTemp; // �ӽð����� ��(���� iNum1�� ��)�� iNum2�� ����

	printf("SwapValue ���๮, iNum1(%d), iNum(%d)\n", iNum1, iNum2);
}
void SwapRef(int * pNum1, int * pNum2)
{
	int iTemp = *pNum1;
	*pNum1 = *pNum2;
	*pNum2 = iTemp;
	printf("SwapRef ���๮, iNum1(%d), iNum(%d)\n", *pNum1, *pNum2);
}