// Exam03.c

#include <stdio.h>

void main() {
	// if, else if, else ���
	int iNum = 0;
	printf("���� �Է� : ");
	scanf("%d", &iNum);

	// �Է��� ������ ���, ����, 0 �Ǻ�
	if (iNum > 0) {
		printf("����Դϴ�.\n");
	}
	else if (iNum == 0) {
		printf("0�Դϴ�.\n");
	}
	else {
		printf("�����Դϴ�.\n");
	}
}