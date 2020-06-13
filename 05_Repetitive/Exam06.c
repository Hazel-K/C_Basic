// Exam06.c

#include <stdio.h>

void main() {
	int i, iSum = 0;

	for (i = 10; i > 0; i--) // 10부터 1까지 수행
	{
		printf("%d\n", i);
	}
	printf("\n\n");

	while (iSum < 100)
	{
		i++;
		iSum += i;
	}
	printf("i가 %d일 때, iSum은 100보다 커졌다. iSum = %d\n", i, iSum);
}