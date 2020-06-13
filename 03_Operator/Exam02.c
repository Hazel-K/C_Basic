// Exam02.c

#include <stdio.h>

void main() {
	/*
		복합대입연산자
			대입연산자(=)에 다른 연산자가 합쳐진 것
	*/
	int iNum = 0;
	iNum = 10;

	iNum += 5; // iNum = iNum + 5; 와 동일
	// iNum에 대입될 값은 iNum의 값과 5를 더한 값인 15이다.
	printf("iNum = %d\n", iNum);

	iNum += 3;
	printf("iNum = %d\n", iNum);
	
	iNum -= 2;
	printf("iNum = %d\n", iNum);
	
	iNum *= 3;
	printf("iNum = %d\n", iNum);

	iNum /= 2;
	printf("iNum = %d\n", iNum);
}