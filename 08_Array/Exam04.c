// Exam04.c

#include <stdio.h>

void main() {
	// 2차원 문자배열로 동물이름 입력 받기
	char szArrAnimal[3][20] = { 0, }; //20글자 문자열이 3개
	int i = 0;
	int iArrLen = 0;

	iArrLen = sizeof(szArrAnimal) / sizeof(szArrAnimal[0]); // 2차원 배열에서 1개 값만 쓴다면 해당 행 전체 값을 의미함
	// 20 * 3 = 60byte / 1개 행의 크기 20byte = 3(행의 개수)
	// 배열은 차원을 불문하고 인덱스를 사용해서 요소에 접근한다.
	// 특정 칸이 지정되어야 그 자료형 공간을 의미한다.
	// 1차원 : iArr[1] --> 2번째 요소
	// 2차원 : iArr[1][1] --> (1,1)의 요소 1개
	//		   iArr[1] --> 1행 요소 전체
	printf("동물 이름 입력\n");
	for (i = 0; i < iArrLen; i++)
	{
		printf("%d번 동물 : ", i + 1);
		gets(szArrAnimal[i]); // 한행 전체를 의미 --> 1차원 문자배열과 같다.
	}

	for (i = 0; i < iArrLen; i++)
	{
		printf("%d번 동물은 %s입니다.\n", i + 1, szArrAnimal[i]);
	}
}