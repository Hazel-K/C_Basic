// Exam07.c

#include <stdio.h>

void main() {
	// switch ~ case ����
	// ���� �Է¹޾Ƽ� ������ ���
	int iMonth = 0;
	printf("���� ���� �Է��ϼ��� : ");
	scanf("%d", &iMonth);

	switch (iMonth) {
	case 3:
	case 4:
	case 5:
		printf("��\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("����\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("����\n");
		break;
	case 12:
	case 1:
	case 2:
		printf("�ܿ�\n");
		break;
	default:
		printf("�߸� �Է��Ͽ����ϴ�. (%d)\n", iMonth);
	}
}