// Exam03.c
#include <stdio.h>

void Func1();
void Func2();
void Func3();

void main() {
	printf("main, 시작\n");
	Func1();
	printf("main, 끝\n");
}

// 코드의 흐름
// main -> f1 -> f2 -> f3 -> f2 -> f1 -> main

// [정의]
void Func1()
{
	printf("Func1, 시작\n");
	Func2;
	printf("Func1, 끝\n");
}

void Func2()
{
	printf("Func2, 시작\n");
	Func3;
	printf("Func2, 끝\n");
}

void Func3()
{
	printf("Func3, 시작\n");
	printf("Func3, 끝\n");
}