// Exam03.c

#include <stdio.h>

void main()
{
	/*
		배열과 포인터
			- 배열명은 첫 번째 요소의 주소 (시작주소/첫번째 byte)
				> 2차원 배열에서 [][] 인덱스 하나만 [] 사용하면 한 행의 시작 주소를 나타낸다.
			- 배열변수를 포인터변수에 저장하면 똑같이 다룰 수 있다.
				> 차이점
					1. 크기
					2. 변수의 연산 여부
	*/

	int iArr[5] = { 1,2,3,4,5 };
	int * pArr = iArr; // iArr가 주소값이기 때문에 & 안 써도 대입 가능
	int i = 0;

	printf("배열명 자체의 값 : %p\n", iArr); // 생성된 배열의 시작 주소(첫 번째 요소의 주소값)
	printf("배열명 첫 번째 요소의 주소값 : %p\n", &iArr[0]); // iArr과 동일
	printf("배열명이 가리키는 값 : %d\n", *iArr); // 주소값 앞에는 * 간접참조연산 사용 가능
	printf("배열 첫 번째 요소의 값 : %d\n", iArr[0]);

	printf("포인터 변수의 값 : %p\n", pArr);
	printf("포인터의 첫 번째 주소 : %p\n", (pArr+0));
	printf("포인터의 두 번째 주소 : %p\n", (pArr+1));
	// 주소값 + 정수 --> 자료형 크기에 맞게 정수와 곱해진다.
	// int 라면 +1을 했을 때 주소값은 +4가 된다. (int가 4byte 이므로)
	// double 이라면 +2를 했을 때 주소값은 +16이 된다. (double이 8byte 이므로)

	printf("포인터가 가리키는 값 : %d\n", *pArr);
	printf("포인터의 첫 번째 값 : %d\n", *(pArr+0));
	printf("포인터의 두 번째 값 : %d\n", *(pArr+1));

	for (i = 0; i < 5; i++)
	{
		printf("[%d]회차 수행\n", (i + 1));
		printf("배열 각 요소의 주소 : %p\n", (iArr + i));
		printf("배열 각 요소의 값 : %d\n", *(iArr + i)); // 주소값 변경
		printf("배열 각 요소의 값 : %d\n\n", *(iArr) + i); // 주소값 고정
		
		printf("포인터 각 요소의 주소 : %d\n", &pArr[i]);
		printf("포인터 각 요소의 값 : %d\n\n", pArr[i]);
		// 배열 변수와 포인터 변수는 둘다 주소값을 의미
		// 배열 변수로도 주소값+정수를 사용할 수 있다.
		// 포인터 변수로 인덱스를 사용할 수 있다.
		// 주소값 + 정수 형태보다는 인덱스 형태가 좀 더 보기 편하다.

		// 배열 변수와 포인터 변수의 차이점
		// (1) 크기
		printf("iArr의 크기 : %d byte\n", sizeof(iArr));
		printf("pArr의 크기 : %d byte\n", sizeof(pArr)); // 포인터 변수의 크기는 무조건 4 byte

		// (2) 연산 여부
		for (i = 0; i < 5; i++)
		{
			// printf("포인터 각 요소의 값 : %d\n", *pArr);
			// pArr++; // pArr = pArr + 1;
			// printf("포인터 각 요소의 값 : %d\n", *(pArr++)); // pArr 변수에 저장된 주소값을 사용하고 난 뒤, 1 증가
			// printf("포인터 각 요소의 값 : %d\n", *(++pArr));
			printf("포인터 각 요소의 값 : %d\n", *pArr++);

			// iArr++; // 이거 안됨 : 배열명은 생성되는 순간 상수처리 된다.
					// 상수 : 변경할 수 없는 값
					// 배열명 자체는 연산으로 값을 변경하는 행위가 불가능
		}
		printf("for문 끝나고 pArr이 가리키는 값 : %d\n", *pArr);
	}
}