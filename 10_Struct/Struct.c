// Struct.c

/*
	구조체(Struct) - 사용자 정의 자료형(type)
		- 다양한 타입의 변수들을 묶은 자료형
			> 배열 : 같은 타입 변수들의 나열
			> 구조체 : 여러 타입 변수들의 나열

		- 구조체는 미리 선언하고 사용한다.
			> 함수 선언부 위(함수 원형에서 사용할 수 있기 때문)
			> 구조체 선언 = 새로운 자료형 만들었다.

		- 구조체 멤버로 배열, 포인터, 다른 구조체 등도 사용할 수 있다.
			> 변수화 가능한 모든 것

		- 구조체 변수는 멤버들을 묶은 단위이다.
			> 일반 변수처럼 사용할 수 있다.
*/

#include <stdio.h>
#include <string.h>

// (1) 구조체의 정의
struct STUDENT // 통상적으로 대문자로만 이름 구성
{
	// 구조체가 가질 멤버 선언
	char szName[20];	// 학생 이름
	// 구조체 멤버 선언 시 배열에 초기화 값을 주어선 안된다.
	// 이런 자료형이 있다고 선언만 할 뿐, 공간이 실제로 만들어지는 것이 아니기 때문이다.
	// 구조체를 이용하여 변수를 만들 때 공간이 생성되고 그 때 초기화를 진행한다.
	int iAge;			// 학생 나이
	double dGrade;		// 학생 점수
};

// (2) typedef를 이용한 struct 글자 떼기
typedef struct _EMPLOYEE // _EMPLOYEE 사용하지 않을 이름이라서 언더바 _ 붙임
{
	char szName[20];	// 사원 이름
	int iAge;			// 사원 나이
	int iSalary;		// 사원 월급
}EMPLOYEE;

typedef int KOREAIS_INT; // int를 KOREAIS_INT 이름으로 사용할 수 있게 정의

void main()
{
	// (1) 구조체를 사용하면 학생 10명일 때, 구조체 변수 10개면 된다.
	struct STUDENT sKim1; // STUDENT 자료형으로 만든 변수, 초기화는 되지 않았음
	struct STUDENT sKim2 = { 0, }; // 초기화, 배열과 같은 형태
	struct STUDENT sLee1 = { "이몽룡", 20, 95.9 }; // 초기화, 배열과 같은 형태

	// (2) 구조체를 사용하지 않았다면 각 변수를 10개씩 만들어야 한다.
	
	// (3) typedef를 이용한 Struct 떼기
	EMPLOYEE sHong = { 0, }; // typedef 사용, 0 초기화가 제일 이상적인 초기화 방식
	struct _EMPLOYEE sHong2 = { 0, }; // 이렇게도 사용 가능

	EMPLOYEE * pHong = NULL; // 구조체는 자료형이므로 포인터 변수 생성 가능
	pHong = &sHong;

	// 구조체 변수명에서 점 . 을 붙이면 구조체 멤버에 접근할 수 있다.
	sHong.iAge = 20;
	sHong.iSalary = 2000000;
	// sHong.szName = "홍길동"; // 초기화 이후 배열에는 문자열을 삽입할 수 없다.
	strcpy(sHong.szName, "홍길동");
	
	printf("이름 : %s\n", sHong.szName);
	printf("나이 : %d\n", sHong.iAge);
	printf("월급 : %d\n", sHong.iSalary);

	// 구조체의 포인터 변수로 멤버에 접근 시 점 대신 -> 사용
	pHong->iAge = 21; // sHong 구조체를 따라가서 멤버를 사용
	pHong->iSalary = 2500000;

	printf("이름 : %s\n", pHong->szName);
	printf("나이 : %d\n", (*pHong).iAge); // *pHong = sHong 이므로 . 으로 접근
	printf("월급 : %d\n", sHong.iSalary);

	// 함수 안에서 함수 외부의 구조체를 접근할 때 포인터 변수를 사용, 이 때 -> 사용
}