// Exam05.c

#include <stdio.h>

void main() {
	/*
		2�� for�� : ��(*) ���
			- �Էµ� �� ��ŭ �Ʒ��� ���� ���
			[��°��]
			���� �Է� : 5
			*
			**
			***
			****
			*****
	*/
	int i, j, k = 0;
	printf("���� �Է� : ");
	scanf("%d", &k);

	for (i = 0; i < k; i++)
	{
		for (j = 0; j <= i ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}