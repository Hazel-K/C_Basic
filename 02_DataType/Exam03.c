// Exam03.c

#include <stdio.h>

void main() {
	/*
		3. ���� ǥ��
			10���� : �׳� ����.
			8����  : ���� �տ� 0�� ���δ�.
			16���� : ���� �տ� 0x�� ���δ�.
	*/

	int iValue1 = 10;
	int iValue2 = 010;
	int iValue3 = 0x10;

	printf("iValue1 = %d\n", iValue1);
	printf("iValue2 = %d\n", iValue2);
	printf("iValue3 = %#d\n\n", iValue3);
	// ���Ĺ��� �ɼǿ� #�� ����ϸ� � �������� �Բ� ����Ѵ�.

	printf("iValue1 = %o\n", iValue1);
	printf("iValue2 = %o\n", iValue2);
	printf("iValue3 = %#o\n\n", iValue3);
	// 8������ ǥ��

	printf("iValue1 = %x\n", iValue1);
	printf("iValue2 = %x\n", iValue2);
	printf("iValue3 = %#x\n\n", iValue3);
	// 16������ ǥ��
}