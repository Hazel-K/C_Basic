// Repetitive.c

/*
	�ݺ���
		- �־��� ������ �����ϸ� �ݺ��ϴ� ���
			> ������ �������� ���� ������ �ݺ�

		- ���ǽĿ� ���� ������ ���Ǻ���
			> ���Ǻ����� �ٷ�� ���� �ſ� �߿�
			> ���� ������ �뵵
				1) �� �� �ݺ����� �ݺ����� ���� �뵵
				2) �ݺ� + ���� ����� ���� �뵵

		1. for��
			for (�ʱ��; ���ǽ�; ������) // 3���� ��
			{ ���๮ }
				�ʱ�� : ���� �� ���� ����
				���ǽ� : ������ ���̸� ���๮�� �����ϰڴٴ� �ǹ�
				������ : ���๮�� ���� �� �������� ����

			- for�� ���� ����
				1. �ʱ�� ����
				2. ���ǽ� �Ǻ�
				3. ���๮ ���� (������ ���� ��)
				4. ������ ����
				5. ���ǽ� �Ǻ� (���� �ݺ�, ����>����>����>����>����>����...)

			- 3���� �ĵ��� ���� ������ �����ϸ�,
			��� ������ ��� �׻� ������ �����Ѵ�. (���ѹݺ�)
				for(;;)

		2. while��
			while (���ǽ�)
			{ ���๮ }
			- if���� ������ ������ ���๮�� ���� �� ���ǽ����� �ǵ��ư�
			- while�� ���� ����
				1. ���ǽ� �Ǻ�
				2. ���๮ ����
				3. ���ǽ� �Ǻ����� �ݺ� (����>����>����>����...)

		3. do ~ while��
			do { ���๮ } while (���ǽ�); �����ݷ� �߿�

			- do(�ض�~) ������ ���๮�� 1ȸ ���� �� ���ǽ��� �Ǻ�
			- do ~ while ���� ���� : ����>����>����>����...
			- ���ǽ� �ڿ� �����ݷ�(;)�� ���δ�.
				> if, for, while���� ������ �ʴ´�.

		�ݺ����� ������� : break, continue
			> break : ���� �������� �ݺ����� ����������.
				switch ~ case��, �ݺ������� ���
			> continue : ���� ���๮ �ڵ带 �������� �ʰ� ���� ������ �����Ѵ�.
				�ݺ����ȿ����� ��� ����
*/

#include <stdio.h>

void main() {
	// 1. for��
	int i = 0; // i��� �̸��� for�� ����� �� ���� ��Ī (index)
				// for���� ���� �� ���ȴٸ� ���ĺ� ������ ���, i, j, k...
	for (i = 0; i < 5; i++) // �ʱ�� ; ���ǽ� ; ������
	{
		// ���๮
		printf("for��! : %d\n", i);
	}
	printf("for���� ������ i�� �� : %d\n", i);

	// 2. while��
	i = 0; // �ʱ��
	while (i < 5) // ���ǽ�
	{
		// ���๮
		printf("while��! : %d\n", i);
		i++; // ������, ������ �Ѱ�� �ڷ����� ������ ����Ѵ�. ex) int : -21�� ~ 21�� ���� �ʰ� �� ���� �߻�
	}
	printf("while���� ������ i�� �� : %d\n", i);

	// 3. do ~ while�� ; 1�� �����ؾ� �� ��
	do
	{
		printf("(1) 9�� �Է��ϸ� ���� : ");
		scanf("%d", &i);
	} while (i != 9); // i�� ���� 9�� �ƴϸ� �����ض�

	i = 0;
	while (i != 9)
	{
		printf("(2) 9�� �Է��ϸ� ���� : ");
		scanf("%d", &i);
	}

	while (1) // �׻� �����ϴ� �ݺ���, ���ѹݺ�
	{
		printf("(3) 9�� �Է��ϸ� ���� : ");
		scanf("%d", &i);
		if (i == 9)
		{
			break;
		}
	}
}