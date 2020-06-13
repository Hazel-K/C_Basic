
#include <stdio.h>

int SelectLanguage();

void main()
{
	/*
		��°���� �������� �Լ� �ϼ��ϱ�
			> main()�Լ� ���� ������ ����� �������� �ʽ��ϴ�!!
		
		[��°��]
		1. C���
		2. JAVA
		3. PYTHON
		������ ��� �ڵ带 �Է��ϼ��� : 1
		������ ��� �ڵ�� 1�� �Դϴ�.
	*/

	int iLanguage = 0;

	iLanguage = SelectLanguage(); // ������ ���ԵǾ��ٴ� ���� �Լ��� return ���� �ִٴ� ���� �ǹ�

	printf("������ ��� �ڵ�� %d�� �Դϴ�.\n", iLanguage);
}

int SelectLanguage()
{
	int i = 0;
	printf("1. C���\n2. JAVA\n3. PYTHON\n");
	printf("������ ��� �ڵ带 �Է��ϼ��� : ");
	scanf("%d", &i);

	// 1�� ���
	if (i == 1)
	{
		return 1;
	}
	else if (i == 2)
	{
		return 2;
	}
	else if (i == 3)
	{
		return 3;
	}
	else
	{
		do {
			printf("�ٽ� �Է��ϼ��� : ");
			scanf("%d", &i);
		} while (i < 1 || i > 3);
		if (i == 1)
		{
			return 1;
		}
		else if (i == 2)
		{
			return 2;
		}
		else if (i == 3)
		{
			return 3;
		}
	}

	// 2�� ���
	do {
		if (i < 1 || i > 3)
		{
			printf("�ٽ� �Է��ϼ��� : ");
			scanf("%d", &i);
		}
		if (i == 1)
		{
			return 1;
		}
		else if (i == 2)
		{
			return 2;
		}
		else if (i == 3)
		{
			return 3;
		}
	} while (i < 1 || i > 3);

	// 3�� ���
	for (;;)
	{
		if (i < 1 || i > 3)
		{
			printf("�ٽ� �Է��ϼ��� : ");
			scanf("%d", &i);
		}
		if (i == 1)
		{
			return 1;
		}
		else if (i == 2)
		{
			return 2;
		}
		else if (i == 3)
		{
			return 3;
		}
	}

	// 4�� ���
	while (i < 1 || i > 3)
	{
		printf("�ٽ� �Է��ϼ��� : ");
		scanf("%d", &i);
	}
	if (i == 1)
	{
		return 1;
	}
	else if (i == 2)
	{
		return 2;
	}
	else if (i == 3)
	{
		return 3;
	}
}