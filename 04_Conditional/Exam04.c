// Exam04.c

#include <stdio.h>

void main() {
	// if�� ��ø : if�� ���๮ �ȿ� �Ǵٸ� if���� ���
	int iNum = 0;
	printf("���� �Է� : ");
	scanf("%d", &iNum);

	// �Է��� ������ ���, ����, 0 �Ǻ�
	if (iNum > 0) {
		printf("����Դϴ�.\n");
	}
	else {
		// ���ο� ����
		// �����ȿ����� main() �Լ� �ȿ� ����� �� �ִ� ��� �ڵ带 �����ϰ� �ۼ��� �� ����.
		if (iNum < 0) {
			printf("�����Դϴ�.\n");
		}
		else {
			printf("0�Դϴ�.\n");
		}
	}
}