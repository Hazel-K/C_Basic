// Exam02.c

#include <stdio.h>

void main() {
	/*
		���մ��Կ�����
			���Կ�����(=)�� �ٸ� �����ڰ� ������ ��
	*/
	int iNum = 0;
	iNum = 10;

	iNum += 5; // iNum = iNum + 5; �� ����
	// iNum�� ���Ե� ���� iNum�� ���� 5�� ���� ���� 15�̴�.
	printf("iNum = %d\n", iNum);

	iNum += 3;
	printf("iNum = %d\n", iNum);
	
	iNum -= 2;
	printf("iNum = %d\n", iNum);
	
	iNum *= 3;
	printf("iNum = %d\n", iNum);

	iNum /= 2;
	printf("iNum = %d\n", iNum);
}