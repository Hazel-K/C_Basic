/*
	Exam05 �� ���� �Ǻ��� switch~case ������!!
        hint : (���� / ����) �� ��� Ȱ��! case, default�� �̿�
*/
#include <stdio.h>

void main() {
	int iS1 = 0;
	printf("���� �Է� : ");
	scanf("%d", &iS1);

	switch (iS1 / 10)
	{
	case 10:
		printf("(����)A����\n");
		break;
	case 9:
		printf("A����\n");
		break;
	case 8:
		printf("B����\n");
		break;
	case 7:
		printf("C����\n");
		break;
	
	default:
		if (iS1 == 0) {
			printf("(����)\n");
		}
		printf("F����\n");
		//break;
	}
}