// Exam05.c

#include <stdio.h>

void main() {
	// �Էµ� ������ ���� ���� ���
	int iScore = 0;
	printf("���� �Է� : ");
	scanf("%d", &iScore);
	
	// 90 : A���� 80 : B���� 70 : C���� 70 : F����
	if (iScore >= 90) {
		if (iScore == 100)
			printf("(����!)");
		printf("A ����\n");
		}
	}
	else if (iScore >= 80) {
		printf("B ����\n");
	}
	else if (iScore >= 70) {
		printf("C ����\n");
	}
	else {
		if (iScore == 0) {
			printf("(����!)F ����\n");
		} else {
		printf("F ����\n");
		}
	}
}