// Exam02.c

/*
	��Ģ������ �ϴ� �Լ� ����/���� �� main()���� ȣ��
		> ����, ����, ����, ������ 4�� �Լ� �����
		> �Ű������� ��ȯŸ���� �����Ӱ�
		> ��, ������ �Լ� ���ο��� ����
*/

#include <stdio.h>

int iSum(int iNum1, int iNum2);
int iMin(int iNum1, int iNum2);
int iMul(int iNum1, int iNum2);
int iDiv(int iNum1, int iNum2);

void main() {
	int iNum1 = 0, iNum2 = 0;
	printf("�� �� �Է� : ");
	scanf("%d %d", &iNum1, &iNum2);
	printf("%d + %d = %d\n", iNum1, iNum2, iSum(iNum1, iNum2));
	printf("%d - %d = %d\n", iNum1, iNum2, iMin(iNum1, iNum2));
	printf("%d * %d = %d\n", iNum1, iNum2, iMul(iNum1, iNum2));
	printf("%d / %d = %d\n", iNum1, iNum2, iDiv(iNum1, iNum2));
}

int iSum(int iNum1, int iNum2) 
{
	return iNum1 + iNum2;
}

int iMin(int iNum1, int iNum2)
{
	return iNum1 - iNum2;
}

int iMul(int iNum1, int iNum2)
{
	return iNum1 * iNum2;
}

int iDiv(int iNum1, int iNum2)
{
	return iNum1 / iNum2;
}