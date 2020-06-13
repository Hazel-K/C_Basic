// Array.c

/*
	배열 (Array)
		1. 정의 : 같은 타입의 여러 공간을 하나의 변수로 다루는 것.
			> 만들어진 공간은 연속된다(이어진다).

		2. 선언 : 대괄호 [] 이용
			int iArr[5]; // 길이가 5인 int 배열
			float fArr[3]; // 길이가 3인 float 배열

		3. 인덱스 (index)
			- 배열의 요소 : 생성된 배열의 각 저장 공간
			- 배열이름[index] 형태로 요소에 접근 및 사용
			- 인덱스 = 순서
				> 모든 언어에서 인덱스는 0부터 시작
				> 컴퓨터는 순서를 0부터 센다
				> index = 0 ~ (길이 -1)
*/

#include <stdio.h>

void main() {
	// 배열 생성
	int iArr1[5]; // 배열 생성, 각 공간(5개의 정수)은 초기화되지 않음(쓰레기 값)

	int iArr2[5] = { 1, 2, 3, 4, 5 }; // 배열 생성과 동시에 초기화(순서대로)

	int iArr3[5] = { 1, 2 }; // 뒤에 나머지 공간 3개는 자동으로 0이 채워진다.

	int iArr4[5] = { 0, }; // 배열을 만들 때 가장 올바른 방법. 모든 공간을 0으로 만들겠다.

	int iArr5[] = { 10, 20 , 30 , 40 , 50 }; // 자동으로 길이가 5가 됨(컴파일러 역할)

	// 배열 요소 접근
	iArr1[0] = 10;
	iArr1[1] = 20;
	iArr1[2] = 30;
	iArr1[3] = 40;
	iArr1[4] = 50;
	// iArr1[5] = 60; // 잘못된 인덱스, 6번째 공간은 없음
	// 인덱스에 음수는 없다.(PYTHON에서는 가능)

	// 인덱스를 통해 공간에 접근한다. --> 일반 변수 사용하듯이 똑같이 사용.
	printf("iArr1[0] = %d\n", iArr1[0]);

	/*
		int iNum = 0;
		scanf("%d", &iNum);		--> iNum 공간에 입력된 값을 저장하겠다.
		printf("%d", iNum);		--> iNum 공간에 입력된 값을 출력하겠다.
		iNum = 10;				--> iNum 공간에 값을 대입하겠다.

		int iArr[5] = { 0, };
		scanf("%d", &iArr[0]);	--> iArr[0] 공간에 입력된 값을 저장하겠다.
		printf("%d", iArr[0]);	--> iArr[0] 공간에 입력된 값을 출력하겠다.
		iArr[0] = 10;			--> iArr[0] 공간에 값을 대입하겠다.
	*/

	// 배열은 for문과 자주 쓴다.
	for (int i = 0; i < 5; i++) { // 길이 5인 iArr 배열의 인덱스 범위 : 0, 1, 2, 3, 4
		// i 변수는 배열의 인덱스 값으로 사용 --> 배열의 모든 요소에 접근
		iArr1[i] = 100 * (i + 1);
		printf("iArr1[%d] = %d\n", i, iArr1[i]);
	}
	
	// 배열의 크기
	printf("iArr1의 크기 : %d\n", sizeof(iArr1));

	// 변수 선언하려고 만든 지역 (그냥 무조건 진입)
	{
		int iArr[10] = { 0, }; // 이 변수는 지역이 끝나면 소멸
		int iArrLen = 0;

		// 40 byte / 4 byte = 10
		iArrLen = sizeof(iArr) / sizeof(iArr[0]);

		for (int i = 0; i < iArrLen; i++) {
			iArr[i] = 1 * (i + 1);
			printf("iArr[%d] = %d\n", i, iArr[i]);
		}

		// 바람직한 배열과 for문의 사용
		{
			int i = 0;
			int iScore1 = 10;
			int iScore2 = 20;
			int iScore3 = 30;
			int iScore4 = 40;
			int iScore5 = 50;
			int iScore6 = 60;
			int iScore7 = 70;
			int iScore8 = 80;
			int iScore9 = 90;
			int iScore10 = 100;

			int iScore[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
			for (; i > 10; i++) {
				iScore[i] = (1 + i) * 10;
			}
		}
	}
}