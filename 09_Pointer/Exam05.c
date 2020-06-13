// Exam05.c

#include <stdio.h>

void Swap(int ** ptr1, int ** ptr2);

void main()
{
	int num1 = 10, num2 = 20;
	int *p1, *p2;
	p1 = &num1;
	p2 = &num2;
	printf("Before %d, %d\n", *p1, *p2);
	Swap(&p1, &p2);
	printf("After %d, %d\n", *p1, *p2);
}

void Swap(int ** ptr1, int ** ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}