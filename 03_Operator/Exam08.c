// Exam08.c

#include <stdio.h>

void main() {
	/*
		����ȯ --> �ڷ����� ��ȯ
			�ڵ� ����ȯ
				���� --> �Ǽ� : ���� �Ҽ����� ����(���� �߻� ���ɼ��� ����)
				�Ǽ� --> ���� : �Ҽ��� ���� ���� �Ҹ�
				ū Ÿ�� ���� --> ���� Ÿ�� ����

			����� ����ȯ(casting)
				(type)�� �� �տ� ����Ͽ� ��ȯ
				(int)3.14 --> 3
	*/
	double dNum = 123; // int -> double �ڵ�����ȯ
	int iNum = 129.123; // double -> int �ڵ�����ȯ
	char cNum = iNum; // int -> char

	printf("dNum = %f\n", dNum);
	printf("iNum = %d\n", iNum);
	printf("cNum = %d\n", cNum);

	// �ٸ� �ڷ������� ������ �� ���, ũ�Ⱑ ū �ڷ������� ��ȯ�ȴ�.
	printf("5 + 3.14 = %f\n", (5 + 3.14)); // int[4] + double[8] = double[8]
	printf("3.14 + 3.13f = %f\n", (3 + 3.13f)); // int[4] + float[4] = float[4]

	printf("5 + 3.14 = %d\n", (5 + (int)3.14)); // 5 + 3
	printf("5 + 3.14 = %d\n", (int)(5 + 3.14)); // (int)8.14
	printf("5 + 3.14 = %f\n", (int)5 + 3.14); // 5 + 3.14
}