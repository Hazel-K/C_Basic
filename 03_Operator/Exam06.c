// Exam06.c

#include <stdio.h>

void main() {
	/*
		bit연산자
			> 0과 1로 이루어진 2진수로 연산을 한다.
			&	: AND 둘 다 1이어야 1, 아니면 0
			|	: OR 둘 중 하나가 1이면 1, 둘 다 아니면 0
			^	: XOR 두 값이 다르면 1, 같으면 0
			~	: 비트 전환, 0은 1로, 1은 0으로
			<<	: 비트를 좌측으로 이동
			>>	: 비트를 우측으로 이동
	*/
	printf("4 & 3 = %d\n", (4 & 3));
	printf("5 | 3 = %d\n", (5 | 3));
	printf("3 ^ 2 = %d\n", (3 ^ 2));

	printf("8 << 2 = %d\n", (8 << 2));
	printf("8 >> 2 = %d\n", (8 >> 2));
	printf("10 >> 2 = %d\n", (10 >> 2));
	printf("10 << 2 = %d\n", (10 << 2));
	// 비트연산은 일반 연산보다 속도가 빠르다.
	// 일반연산과 비교하여 그 속도의 차이가 크지 않기 때문에 굳이 비트연산을 사용할 일이 없다.
}