/*
	3���� ���ڸ� �Է¹޾Ƽ� ū ������� ������ �� ����ϱ�
		1. Sort �Լ� �ϼ�
			> Sort�Լ� ���� �� �� �������� ���� �ٲ���־�� �Ѵ�.
		2. Swap �Լ��� �� ������ SwapRef Ȱ��
*/

#include <stdio.h>

// ����
void Swap(int* pNum1, int* pNum2); // �� ������ ���� �ٲ۴�.
void Sort(int* pNum1, int* pNum2, int* pNum3); 

void main()
{
	int iMax = 0;
	int iMid = 0;
	int iMin = 0;

	printf("���� 3�� �Է� : ");
	scanf("%d %d %d", &iMax, &iMid, &iMin);

	Sort(&iMax, &iMid, &iMin);
	printf("���ĵ� �� : %d, %d, %d\n", iMax, iMid, iMin);
}

void Swap(int* pNum1, int* pNum2)
{
	int iTemp = *pNum1;
	*pNum1 = *pNum2;
	*pNum2 = iTemp;
}
void Sort(int* pNum1, int* pNum2, int* pNum3)
{
	Swap(pNum1, pNum2);
}