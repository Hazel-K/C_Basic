// Exam03.c

#include <stdio.h>

void main() {
	// for�� ��ø : 2�� for��
	// 3�� for�����ʹ� ������� �ʴ´ٰ� ����

	int i, j, k = 0;
	printf("i j\n=====\n");

	for (i = 0; i < 3; i++) // i : 0, 1, 2 ����, 3 ��
	{
		for (j = 0; j < 3; j++) // j : 0, 1, 2 ����, 3 ��
		{
			printf("%d %d\n", i, j);
		}
	}

	printf("\ni j k\n=====\n");
	for (i = 0; i < 3; i++) // i : 0, 1, 2 ����, 3 ��
	{
		for (j = 0; j < 3; j++) // j : 0, 1, 2 ����, 3 ��
		{
			for (k = 0; k < 3; k++) // k : 0, 1, 2 ����, 3 ��
			{
				printf("%d %d %d\n", i, j, k);
			}
		}
	}
}