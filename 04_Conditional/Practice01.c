/*
	3���� ������ �Է¹޾� ��� ������ 60�� �̻��̸� �հ�, �ƴϸ� ���հ�

	[��°��]
	������ ���ʴ�� �Է����ּ��� : 60 60 60
	�հ�
*/
#include <stdio.h>

void main() {
	/*int iClass1, iClass2, iClass3 = 0;
	printf("������ ���ʴ�� �Է����ּ��� : ");
	scanf("%d %d %d", &iClass1, &iClass2, &iClass3);
	switch ((iClass1 + iClass2 + iClass3) / 10)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("���հ�\n");
		break;
	default:
		printf("�հ�\n");
		//break;
	}*/

	int iScore1, iScore2, iScore3 = 0;
	float iAvg = 0;
	printf("������ ���ʴ�� �Է����ּ��� : ");
	scanf("%d %d %d", &iScore1, &iScore2, &iScore3);
	iAvg = (iScore1 + iScore2 + iScore3) / 3;

	if (iAvg >= 60) {
		printf("�հ�!\n");
	}
	else {
		printf("���հ�\n");
	}
}