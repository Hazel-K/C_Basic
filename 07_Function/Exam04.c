// Exam04.c

/*
	재귀호출
		- 재귀 함수
		- 함수의 수행문 안에서 자기 자신 함수를 다시 호출하는 것
			> 재귀호출을 하는 함수를 재귀함수라고 한다.
		- 반복문과 유사한 성격
		
		- 함수는 호출 시 스택이라는 메모리를 사용한다.
			Stack : First In, Last Out, FILO -- 우물 형태 (한 쪽이 막힌 형태)
				> 첫 번째로 들어온 데이터는 가장 마지막에 나간다.
			Queue : First In, First Out, FIFO -- 파이프 형태 (양방향이 뚤린 형태)
				> 첫 번째로 들어온 데이터가 첫 번째로 나간다.
		
		- 너무 많은 반복 호출은 오류를 발생시킨다.
			> Stack Overflow, 스택 메모리 초과 오류
		- 메모리 공간을 반복 사용하기 때문에 반복문보다 속도가 느리다.

		- 반복문으로 구현했을 때 복잡한 코드가 간결해질 수 있다는 장점이 았다.
			> 재귀호출 자체가 비효율적이므로 확실한 이득이 있을 때 사용을 고려한다.
		- 함수 호출 시 스택을 사용하는 이유는 수행이 끝나고 돌아와야 할 위치를 기억하고 있기 때문
*/

#include <stdio.h>

// [선언]
void fn(int iNum);

void main()
{
	printf("main, 시작\n");
	fn(3);
	printf("main, 끝\n");
}

// [정의]
void fn(int iNum)
{
	printf("fn 시작, iNum = %d\n", iNum);

	if (iNum == 0)
	{
		printf("fn 끝!\n");
		return; // void일 때 리턴을 쓰면 함수가 종료된다.
	}
	fn(iNum - 1); // 재귀호출, 호출을 정지할 빠져나올 구멍이 필요함.
	printf("fn 끝, iNum = %d\n", iNum);

}