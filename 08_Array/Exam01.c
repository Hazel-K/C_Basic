// Exam01.c

#include <stdio.h>
#include <string.h> // 문자열 관련 함수 사용 시 필요

void main() {
	/*
		Char 배열
			- char는 1개 문자를 표현하는 자료형
			- char의 배열 형태는 문자열을 표현할 수 있다.
			- 문자열의 끝에는 널문자 \0이 삽입되어 있다. (자동)
				> 문자열의 끝을 의미
				> 널문자 때문에 배열 선언 시 원하는 문자열 길이보다 최소 1 이상 여유있게 선언해야 한다.
				> 널문자의 포함 때문에 변수명이 접두사에 sz가 붙는다.
					string ~ zero
	*/
	char szStr1[20] = "Hello"; // char 배열 선언과 동시에 초기화할 때 "문자열" 사용 가능, 선언이 끝난 후에는 불가능
	char szStr2[20] = { 'H', 'e', 'l', 'l', 'o', }; // szStr1과 동일
	// 나머지 공간은 자동으로 NULL이 채워진다.
	char szStr3[20] = { 0, }; // 앞서 한 초기화 방법과 동일 (정수 0은 NULL문자)
	char szStr4[20]; // 초기화하지 않은 문자 배열
	char szStr5[] = "Hello World"; // 길이 자동 배정 (길이는 12)

	printf("szStr5의 크기 : %d\n", sizeof(szStr5));
	printf("널문자 문자로 출력 : %c\n", szStr5[11]);
	printf("널문자 정수로 출력 : %d\n", szStr5[11]);
	printf("공백을 문자로 출력 : %c\n", ' ');
	printf("공백을 정수로 출력 : %d\n", ' ');
	// 널문자는 정수 0이다
	// 공백과는 다른 문자이다 (공백은 정수로 32)

	printf("szStr5 : %s\n", szStr5); // 문자 배열의 모든 내용은 %s로 출력할 수 있다.
	// %s는 널문자를 만날 때까지 글자를 출력한다.

	// szStr4 = "Hello";
	szStr4[0] = 'H';
	szStr4[1] = 'e';
	szStr4[2] = 'l';
	szStr4[3] = 'l';
	szStr4[4] = 'o';
	szStr4[5] = '\0'; // 혹은 정수 0을 삽입

	printf("szStr4 = %s\n", szStr4);
	// 문자 배열에 문자열 대입
	// 문자열을 대입하는 것은 배열 생성 시에만 가능
	
	// 문자열을 배열에 대입하려면 문자열 관련 함수를 사용해야 한다. (중요)
	// strcpy(저장될 배열, 저장할 문자열);
	// 이 함수는 string.h 헤더 파일이 필요함
	strcpy(szStr4, "Hello World");
	printf("szStr4 = %s\n", szStr4);

	strcpy(szStr4, szStr5);
	printf("szStr4 = %s\n", szStr4);
}