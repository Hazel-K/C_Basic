// Exam03.c
#include <stdio.h>

void Func1();
void Func2();
void Func3();

void main() {
	printf("main, ����\n");
	Func1();
	printf("main, ��\n");
}

// �ڵ��� �帧
// main -> f1 -> f2 -> f3 -> f2 -> f1 -> main

// [����]
void Func1()
{
	printf("Func1, ����\n");
	Func2;
	printf("Func1, ��\n");
}

void Func2()
{
	printf("Func2, ����\n");
	Func3;
	printf("Func2, ��\n");
}

void Func3()
{
	printf("Func3, ����\n");
	printf("Func3, ��\n");
}