// Exam06.c

#include <stdio.h>

void main() {
	int i, iSum = 0;

	for (i = 10; i > 0; i--) // 10���� 1���� ����
	{
		printf("%d\n", i);
	}
	printf("\n\n");

	while (iSum < 100)
	{
		i++;
		iSum += i;
	}
	printf("i�� %d�� ��, iSum�� 100���� Ŀ����. iSum = %d\n", i, iSum);
}