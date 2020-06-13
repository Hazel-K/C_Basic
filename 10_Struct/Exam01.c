// Exam01.c

// 구조체 안에 구조체
// 매개변수로 사용

#include <stdio.h>

typedef struct _POINT
{
	int x;
	int y;
}POINT;

// 구조체 안에 다른 구조체를 멤버로 가지려면, 그 구조체가 더 위에 미리 선언되어야 한다.

typedef struct _CIRCLE
{
	POINT sPoint;	// 좌표
	int iLen;		// 반지름
}CIRCLE;

void SetCircleVal(CIRCLE sCircle);
void SetCircleRef(CIRCLE * pCircle); // CIRCLE 타입 변수의 주소 값을 전달받겠다. (포인터변수)

/*
	SetCircleVal 사용 시 호출 마다 12byte 공간을 생성
		> 구조체 크기가 크면 그 크기만큼생성
		> 많이 호출할 수록 프로그램이 힘들어진다.

	SetCircleRef 사용 시 호출 마다 4byte 공간을 생성
*/

void main()
{
	POINT sPoint = { 0, }; // POINT가 CIRCLE에 있다고 해서 사용 못하는게 아님

	CIRCLE c1 = { 0, };

	printf("c1의 크기 : %d\n", sizeof(c1));

	// 구조체의 멤버가 구조체일 때 또 점 . 을 찍고 접근한다.
	printf("c1의 좌표 : (%d, %d), 반지름 : (%d)\n", c1.sPoint.x, c1.sPoint.y, c1.iLen);
	SetCircleVal(c1); // c1의 값만 전달했으므로 함수 수행 후 c1의 값은 변화 없음 (call by value)
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