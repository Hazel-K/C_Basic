// Exam07.c

#include <stdio.h>
#include <stdlib.h> // rand() ��� �� �ʿ�. standard library
#include <time.h> // time() ��� �� �ʿ�.

void main() {
	/*
		do ~ while���� �̿뤷�� ���ڸ��߱� ����
			- 1 ~ 100 ���� �� �������� ���� ���� ����
			- ���ڸ� �Է¹޾Ƽ� ������ ����
				�Է� ���ڰ� �� ũ�� : "�� ���� ���� �Է��غ�����"
				�Է� ���ڰ� �� ������ : "�� ū ���� �Է��غ�����"

			- ���� ���ڸ� ���� ������ �ݺ��ؼ� ���� (�Է�/��)
			- �� ȸ ���� ��������� �߰��� ���
				> "�����Դϴ�! nȸ ���� ����~!"
	*/
	int iI = 0; // �Է¹��� ����
	int iA = 0; // ������� ����
	int i = 0;

	// (1) ������� ����
	/*
		rand() : 0 ~ 32767 �߿� �ϳ��� ��ȯ
			> stdlib.h ��� ���� �ʿ�

		srand() : seed �� ������ ���� ��� (seed ���� ����Ǿ�� ���� ���� ����)
			> ȣ������ ������ �õ� ���� 1�� �����ȴ�.
			> ���� �õ� �� 1�� �����Ǳ� ������ �Ź� ������ ������ �߻�
		
		time() : 1970.01.01 ���� ���� ����� �ð�(����: ��)�� ��ȯ�Ѵ�. ���� �߻� �� -1 ��ȯ
			> NULL ���� �ָ� ���� �ð��� ��ȯ��
			> time.h ��� ���� �ʿ�
	*/

	/*
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", (rand() % 100 + 1)); // 1 ~ 100�� �ڸ��� ����� ��
	}
	*/
	
	srand((int)time(NULL));
	iA = rand() % 100 + 1; // 1 ~ 100�� �ڸ��� ����� ��
	printf("�����ڿ� ���� ���� : %d\n\n", iA);

	printf("���� �Է� : ");
	scanf("%d", &iI);
	do
	{
		if (iI > iA) 
		{
			printf("�� ���� ���� �Է��غ�����\n");
			printf("���� �Է� : ");
			scanf("%d", &iI);
			i++;
		}
		else if (iI < iA) 
		{
			printf("�� ū ���� �Է��غ�����\n");
			printf("���� �Է� : ");
			scanf("%d", &iI);
			i++;
		}
	} while (iI != iA);
	printf("�����Դϴ�! %dȸ ���� ����~!\n", i+1);
}