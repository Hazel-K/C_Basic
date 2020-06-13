// Exam07.c

#include <stdio.h>
#include <stdlib.h> // rand() 사용 시 필요. standard library
#include <time.h> // time() 사용 시 필요.

void main() {
	/*
		do ~ while문을 이용ㅇ한 숫자맞추기 게임
			- 1 ~ 100 숫자 중 랜덤으로 정답 숫자 생성
			- 숫자를 입력받아서 맞으면 종료
				입력 숫자가 더 크면 : "더 작은 수를 입력해보세요"
				입력 숫자가 더 작으면 : "더 큰 수를 입력해보세요"

			- 정답 숫자를 맞출 때까지 반복해서 수행 (입력/비교)
			- 몇 회 만에 맞췄는지도 추가로 출력
				> "정답입니다! n회 만에 정답~!"
	*/
	int iI = 0; // 입력받을 변수
	int iA = 0; // 정답숫자 변수
	int i = 0;

	// (1) 정답숫자 생성
	/*
		rand() : 0 ~ 32767 중에 하나를 반환
			> stdlib.h 헤더 파일 필요

		srand() : seed 값 변경을 위한 사용 (seed 값이 변경되어야 랜덤 값도 변경)
			> 호출하지 않으면 시드 값이 1로 설정된다.
			> 같은 시드 값 1로 설정되기 때문에 매번 동일한 난수가 발생
		
		time() : 1970.01.01 자정 이후 경과된 시간(단위: 초)을 반환한다. 오류 발생 시 -1 반환
			> NULL 값을 주면 현재 시간을 반환함
			> time.h 헤더 파일 필요
	*/

	/*
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", (rand() % 100 + 1)); // 1 ~ 100의 자리를 만드는 것
	}
	*/
	
	srand((int)time(NULL));
	iA = rand() % 100 + 1; // 1 ~ 100의 자리를 만드는 것
	printf("관리자용 정답 공개 : %d\n\n", iA);

	printf("숫자 입력 : ");
	scanf("%d", &iI);
	do
	{
		if (iI > iA) 
		{
			printf("더 작은 수를 입력해보세요\n");
			printf("숫자 입력 : ");
			scanf("%d", &iI);
			i++;
		}
		else if (iI < iA) 
		{
			printf("더 큰 수를 입력해보세요\n");
			printf("숫자 입력 : ");
			scanf("%d", &iI);
			i++;
		}
	} while (iI != iA);
	printf("정답입니다! %d회 만에 정답~!\n", i+1);
}