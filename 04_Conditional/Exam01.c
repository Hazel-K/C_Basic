// Exam01.c

#include <stdio.h>

void main() {
	int iValue = 0;

	// 1��
	if (iValue == 0) {
		printf("1. iValue == 0\n\n");
	}

	// 2��
	if (iValue != 0) {
		printf("2. iValue != 0\n\n");
	}

	// 3��
	if (!(iValue == 0)) {
		printf("3. !(iValue == 0)\n\n");
	}

	// 4��
	if (!(iValue != 0)) {
		printf("4. !(iValue != 0)\n\n");
	}

	// 5��;���๮ �ڵ尡 �� ���̸� �߰�ȣ ���� ����
	if (iValue == 0)
		printf("5. iValue == 0\n\n");

	// 6��;���๮ �ڵ尡 �� ���̸� �߰�ȣ �����ϰ� �����ٿ� ���� ����
	if (iValue != 0) printf("6. iValue != 0\n\n");

	// 7��
	if (!(iValue != 0))
		printf("7. !(iValue != 0)\n");
		printf("���� 7���� ���๮!!\n"); // if���� �������
}