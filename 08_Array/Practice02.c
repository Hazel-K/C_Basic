// Practice02.c

#include <stdio.h>

void main()
{
	// szSource �迭�� �̿��Ͽ� szTarget �迭�� ABCCBA�� �����ϱ�
	char szSource[] = "ABC";
	char szTarget[7] = { 0, };
	/*
		szTarget[0] = 'A';
		szTarget[1] = 'B';
		szTarget[2] = 'C';
		szTarget[3] = 'C';
		szTarget[4] = 'B';
		szTarget[5] = 'A';
	*/



	printf("szTarget = %s\n", szTarget);
	// szTarget = ABCCBA
}