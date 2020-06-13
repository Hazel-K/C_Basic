// Pointer.c

/*
	포인터 (Pointer)
		- 메모리 주소를 저장하는 변수
			> 다른 값이 저장된 공간(변수)을 가리킨다.
		
		- type * 포인터변수명
			> 포인터변수의 type은 가리킬 변수의 type과 일치해야 한다.
				>> 주소값은 정수이지만, 자료형별로 실제 크기가 다르기 때문
				>> 주소값의 범위는 4byte --> 포인터변수의 크기는 4byte

		- 주소를 다루는 방법 : &연산자 (주소 연산자)
			> scanf("%d", &iNum);
			> &연산자는 변수의 주소값을 반환한다. (연산의 결과가 주소값)
				>> 시작 주소를 가르쳐준다. (type 크기에 맞게 알아서 공간 사용)

		- 포인터를 다루는 방법 : *연산자 (간접 참조 연산자)
			> int * pNum = NULL; // NULL은 초기화 값
			> NULL은 정수 0이다. (포인터인 것을 명시하려고 사용)
			> 포인터에서 0은 주소 값이 0이다! 라고 해석하는 게 아니라 가리키는 공간이 없다고 해석하는 것이 옳다.
*/

#include <stdio.h>

void main()
{
	int iNum = 0; // 포인터 변수가 가리킬 공간
	int * pNum = NULL;
	int * pNum2 = &iNum;
	int * pNum3 = NULL;

	iNum = 10;		// int이기 때문에 iNum 공간에는 정수를 저장할 수 있다.
	pNum = &iNum;	// 포인터 변수이기 때문에 pNum에는 주소를 저장할 수 있다.

	printf("iNum의 값 ; %d\n", iNum);
	printf("iNum의 주소값 ; %d\n", &iNum); // & 연산에 의해 iNum 공간의 주소가 반환
	printf("iNum의 주소값 ; %p\n", &iNum); // %p : 16진수 표현
	printf("pNum의 값 ; %d\n", pNum);
	printf("pNum의 값(주소)을 따라간 공간의 값 ; %d\n", *pNum);
	// (1) pNum : 포인터 변수를 그대로 사용 (내 공간의 값 = 주소값)
	// (2) *pNum : 내 공간의 주소를 따라서 그 공간의 값을 사용 (간접 참조)

	*pNum = 20; // iNum = 20; 이라는 형태와 같음
	printf("iNum의 값 ; %d\n", iNum);
	printf("*pNum의 값 ; %d\n", *pNum);

	// pNum과 &iNum은 같다 --> iNum 변수의 주소값
	// *pNum과 iNum은 같다 --> iNum 변수값

	*pNum3 = iNum; // 간접 참조할 공간이 없으므로 오류가 발생한다.
	printf("*pNum3 = %d\n", *pNum3);
}