// Exam01.c

#include <stdio.h>

// ����
int getSum(int iNum);

void main() {
	int iInput = 0;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &iInput);

	printf("1~%d������ �� : %d\n", iInput, getSum(iInput));
}

// ���� : 1���� ���޵� 1���� ���ڱ����� ���� ���ؼ� ��ȯ
int getSum(int iNum) {
	int i = 0;
	int iSum = 0;

	for (i = 1; i <= iNum; i++) {
		iSum += i;
	}
	return iSum;
}