// Exam01.c

#include <stdio.h>

void main()
{
	/*
		������ ������ ũ��� 4byte �����̴�.
			> �ּҰ��� �����ϴ� ����
			> �ּҰ��� �����Ϸ�/PC ȯ�濡 ���� ���� ũ�Ⱑ �ٸ� �� ������ ��� ��� ����. (2��� 2�� ����, 4��� 4�� ����)
	*/

	char	cNum = 0;
	int		iNum = 0;
	float	fNum = 0.0f;
	double	dNum = 0.0;

	char*	 pcNum = &cNum;
	int*	 piNum = &iNum;
	float*	 pfNum = &fNum;
	double*	 pdNum = &dNum;

	printf("cNum�� ũ�� : %d\n", sizeof(cNum)); // 1
	printf("iNum�� ũ�� : %d\n", sizeof(iNum)); // 4
	printf("fNum�� ũ�� : %d\n", sizeof(fNum)); // 4
	printf("dNum�� ũ�� : %d\n", sizeof(dNum)); // 8

	printf("pcNum�� ũ�� : %d\n", sizeof(pcNum));
	printf("piNum�� ũ�� : %d\n", sizeof(piNum));
	printf("pfNum�� ũ�� : %d\n", sizeof(pfNum));
	printf("pdNum�� ũ�� : %d\n", sizeof(pdNum)); // �ּҿ� �Ҵ��� ������ ��� �����Ƿ� ��� 4byte�� ���ϵǾ� ����
}