// Practice01.c

#include <stdio.h>

void main()
{
	// �迭 ��� ����� �� ����ϱ�
	int iArr[] = {1,2,3,4,5,6,7,8,9,10};
	int iArrLen = 0;
	int iSum = 0;

	iArrLen = sizeof(iArr) / sizeof(iArr[0]);
	for (int i = 0; i < iArrLen; i++) {
		iSum += iArr[i];
	}

	printf("��� ����� ���� %d�Դϴ�.\n", iSum);
}