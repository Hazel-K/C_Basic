// Exam02.c

#include <stdio.h>

void main() {
	// continue�� break
	int i = 0;

	// continue
	for (; i <= 2; i++)
	{
		if (i == 1)
		{
			continue; // �� ���� ���ο� ���������� ����, ���๮�� ������ ���ο� ����
		}
		printf("%d\n", i); //���� ���๮�� ������ ����
	}
	printf("===\n");

	// break
	for (i = 0; i <= 2; i++) // �ռ� �Ŀ��� ����� i���� �缳��
	{
		if (i == 1)
		{
			break; // �� ���� ���ο� ���������� ����, ���๮�� ������ ���ο� ����
		}
		printf("%d\n", i); //���� ���๮�� ������ ����
	}
}