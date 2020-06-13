// Exam01.c

// ����ü �ȿ� ����ü
// �Ű������� ���

#include <stdio.h>

typedef struct _POINT
{
	int x;
	int y;
}POINT;

// ����ü �ȿ� �ٸ� ����ü�� ����� ��������, �� ����ü�� �� ���� �̸� ����Ǿ�� �Ѵ�.

typedef struct _CIRCLE
{
	POINT sPoint;	// ��ǥ
	int iLen;		// ������
}CIRCLE;

void SetCircleVal(CIRCLE sCircle);
void SetCircleRef(CIRCLE * pCircle); // CIRCLE Ÿ�� ������ �ּ� ���� ���޹ްڴ�. (�����ͺ���)

/*
	SetCircleVal ��� �� ȣ�� ���� 12byte ������ ����
		> ����ü ũ�Ⱑ ũ�� �� ũ�⸸ŭ����
		> ���� ȣ���� ���� ���α׷��� ���������.

	SetCircleRef ��� �� ȣ�� ���� 4byte ������ ����
*/

void main()
{
	POINT sPoint = { 0, }; // POINT�� CIRCLE�� �ִٰ� �ؼ� ��� ���ϴ°� �ƴ�

	CIRCLE c1 = { 0, };

	printf("c1�� ũ�� : %d\n", sizeof(c1));

	// ����ü�� ����� ����ü�� �� �� �� . �� ��� �����Ѵ�.
	printf("c1�� ��ǥ : (%d, %d), ������ : (%d)\n", c1.sPoint.x, c1.sPoint.y, c1.iLen);
	SetCircleVal(c1); // c1�� ���� ���������Ƿ� �Լ� ���� �� c1�� ���� ��ȭ ���� (call by value)
	SetCircleRef(&c1);
}

void SetCircleVal(CIRCLE sCircle)
{
	sCircle.sPoint.x = 3;
	sCircle.sPoint.y = 4;
	sCircle.iLen = 5;
}

void SetCircleRef(CIRCLE * pCircle)
{
	pCircle->sPoint.x = 5;
	pCircle->sPoint.y = 6;
	pCircle->iLen = 10;
}