// Exam06.c

#include <stdio.h>

void main() {
	// switch ~ case ���
	/*
		- �ϳ��� �������� ���� ����� ���� ó��
			1. ���ǽ��� ����� ������ ���
			2. case���� ���� ���� ����� �����ϸ� �ߺ� �Ұ�
		- break;
			> switch���� ����������.
			> case�� �����ϰ� �����ߴµ� break;�� ������
			�� �Ʒ� �ִ� ��� case�� ������ ������ �����ϰ� �� ����
			(break;�� �����ų� switch�� ���� ������)
	*/
	int iNum = 0;
	printf("=======================\n");
	printf("[����ִ� ���α׷���!\n]");
	printf("1. C���!\n]");
	printf("2. PYTHON!\n]");
	printf("2. JAVA!\n]");
	printf("=======================\n");
		 
	printf("������ �� �Է��ϼ��� : ");
	scanf("%d", &iNum);

	switch (iNum) // ���ǽ� (���굵 �����ϳ� ����� �������� �Ѵ�)
	{
		case 1: 
			printf("������ ���� C����Դϴ�.\n");
			break;
		case 2: 
			printf("������ ���� PYTHON�Դϴ�.\n");
			break;
		case 3:
			printf("������ ���� JAVA�Դϴ�.\n");
			break;
		
		default :
			printf("�߸� �Է��Ͽ����ϴ�.(%d)\n", iNum);
	}

	// �� switch ~ case���� if ������ ����
	/*if (iNum == 1) {
		printf("������ ���� C����Դϴ�.\n");
	}
	else if (iNum == 2) {
		printf("������ ���� PYTHON�Դϴ�.\n");
	}
	else if (iNum == 3) {
		printf("������ ���� JAVA�Դϴ�.\n");
	}
	else {
		printf("�߸� �Է��Ͽ����ϴ�.(%d)\n", iNum);
	}*/
}