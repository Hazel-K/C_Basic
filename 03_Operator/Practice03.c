/*
	����,����,���� �� ������ ������ �Է� �ް�,
	������ ����� ����ϼ���. (����� �Ҽ��� ���� 1�ڸ�����)
	
	[��°��]
	����,����,���� ������ ���ʷ� �Է��ϼ��� : 97 86 95
	���� : 278��
	��� : 92.7��
*/

#include <stdio.h>
void main() {
	/*
	float fNum1 = 0;
	float fNum2 = 0;
	float fNum3 = 0;
	printf("����, ����, ���� ������ ���ʷ� �Է��ϼ��� : ");
	scanf("%f %f %f", &fNum1, &fNum2, &fNum3);
	printf("���� : %.0f��\n��� : %.1f��\n", (fNum1 + fNum2 + fNum3), ((fNum1 + fNum2 + fNum3) / 3));
	*/
	int iKor, iEng, iMath, iTotal = 0;
	printf("����, ����, ���� ������ ���ʷ� �Է��ϼ��� : ");
	scanf("%d %d %d", &iKor, &iEng, &iMath);
	iTotal = iKor + iEng + iMath;
	printf("���� : %d��\n��� : %.1f��\n", iTotal, (iTotal / 3.0)); // 3.0 ��� (float)���� ����ȯ �ϵ���.
}