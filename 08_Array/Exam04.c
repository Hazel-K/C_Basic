// Exam04.c

#include <stdio.h>

void main() {
	// 2���� ���ڹ迭�� �����̸� �Է� �ޱ�
	char szArrAnimal[3][20] = { 0, }; //20���� ���ڿ��� 3��
	int i = 0;
	int iArrLen = 0;

	iArrLen = sizeof(szArrAnimal) / sizeof(szArrAnimal[0]); // 2���� �迭���� 1�� ���� ���ٸ� �ش� �� ��ü ���� �ǹ���
	// 20 * 3 = 60byte / 1�� ���� ũ�� 20byte = 3(���� ����)
	// �迭�� ������ �ҹ��ϰ� �ε����� ����ؼ� ��ҿ� �����Ѵ�.
	// Ư�� ĭ�� �����Ǿ�� �� �ڷ��� ������ �ǹ��Ѵ�.
	// 1���� : iArr[1] --> 2��° ���
	// 2���� : iArr[1][1] --> (1,1)�� ��� 1��
	//		   iArr[1] --> 1�� ��� ��ü
	printf("���� �̸� �Է�\n");
	for (i = 0; i < iArrLen; i++)
	{
		printf("%d�� ���� : ", i + 1);
		gets(szArrAnimal[i]); // ���� ��ü�� �ǹ� --> 1���� ���ڹ迭�� ����.
	}

	for (i = 0; i < iArrLen; i++)
	{
		printf("%d�� ������ %s�Դϴ�.\n", i + 1, szArrAnimal[i]);
	}
}