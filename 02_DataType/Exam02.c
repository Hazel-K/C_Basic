// Exam02.c

#include <stdio.h>

void main() {
	// 2. �Ǽ��� (�Ҽ�)
	float fValue = 2.2f; // �Ǽ� ����� ǥ���� �� f�� ���̸� float�� �ȴ�.
	double dValue = -3.3666666666666; // �ƹ��͵� ������ ������ double

	printf("fValue = %f\n", fValue); // �⺻ �Ҽ����� 6�ڸ����� ��µȴ�
	printf("dValue = %f\n", dValue); // 7�ڸ����� �ڵ����� �ݿø��ȴ�

	printf("dValue = %f\n", dValue); // [.m] : �Ҽ��� ����
	printf("dValue = %.2f\n", dValue); // [.2] : �Ҽ����� 2�ڸ��� ����
}