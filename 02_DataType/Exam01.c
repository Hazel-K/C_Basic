// Exam01.c

/*
	하나의 프로젝트에는 하나의 main()만 존재할 수 있다.

	그래서 소스파일을 추가하면서 공부할 때는 나머지 소스파일들은 빌드에서 제외시킨다.
		1. 소스파일 우클릭 -> 속성 -> 빌드에세 제외 항목을 '예'로
		2. 해당 소스파일은 아이콘에 빨간 동그라미가 생긴다.
		3. 수행시키고 싶은 main() 함수가 있는 소스파일을 제외하고 나머진 빌드에서 제외
*/

#include <stdio.h>

void main() {
	/*
		1. 정수형
			- char 자료형은 정수형이지만 '1개 문자'를 표현할 때 사용한다.
				> 1개 문자는 작은따옴표로 묶는다.
				> 정수를 '아스키코드표'에 맞는 문자로 변환하여 표시한다.
					아스키코드 : 문자를 표현하기 위한 코드 체계
	*/
	char cValue = 'A'; // A 문자를 대입하면 실제 cValue 에는 정수 65가 대입된다(아스키코드 기준).
	int iValue = 65;
	
	printf("cValue 문자 : %c\n", cValue);
	printf("cValue 정수 : %d\n", cValue);

	printf("iValue 문자 : %c\n", iValue);
	printf("iValue 정수 : %d\n", iValue);
	
	// printf()의 서식문자 옵션
	printf("[%d]\n", iValue);
	printf("[%d]\n", iValue); // [n] : 자리수 지정 (n만큼 공간 확보 후 삽입)
	printf("[%5d]\n", iValue); // [5] : 자리수 지정 (5만큼 공간 확보 후 삽입)
	printf("[%d]\n", iValue); // [-] : 자리수 지정 시 좌측 정렬
	printf("[%-5d]\n", iValue); // [-5] : 자리수 지정 시 -5만큼 좌측 정렬
	printf("[%d]\n", iValue); // [0] : 자리수 지정 시 빈 자리를 0으로 채움
	printf("[%05d]\n", iValue); // [05] : 자리수 지정 시 5만큼 확보된 공간 중 빈 자리를 0으로 채움, 좌측 정렬시 적용되지 않음
}