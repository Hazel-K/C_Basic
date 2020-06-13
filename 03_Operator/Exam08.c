// Exam08.c

#include <stdio.h>

void main() {
	/*
		형변환 --> 자료형의 변환
			자동 형변환
				정수 --> 실수 : 없던 소수점이 생김(오차 발생 가능성이 있음)
				실수 --> 정수 : 소수점 이하 값은 소멸
				큰 타입 정수 --> 작은 타입 정수

			명시적 형변환(casting)
				(type)을 값 앞에 명시하여 변환
				(int)3.14 --> 3
	*/
	double dNum = 123; // int -> double 자동형변환
	int iNum = 129.123; // double -> int 자동형변환
	char cNum = iNum; // int -> char

	printf("dNum = %f\n", dNum);
	printf("iNum = %d\n", iNum);
	printf("cNum = %d\n", cNum);

	// 다른 자료형끼리 연산을 할 경우, 크기가 큰 자료형으로 변환된다.
	printf("5 + 3.14 = %f\n", (5 + 3.14)); // int[4] + double[8] = double[8]
	printf("3.14 + 3.13f = %f\n", (3 + 3.13f)); // int[4] + float[4] = float[4]

	printf("5 + 3.14 = %d\n", (5 + (int)3.14)); // 5 + 3
	printf("5 + 3.14 = %d\n", (int)(5 + 3.14)); // (int)8.14
	printf("5 + 3.14 = %f\n", (int)5 + 3.14); // 5 + 3.14
}