// Practice04.c

/*
	2중for문을 이용한 구구단 출력
		printf("%d * %d = %d\t", ...... 형식으로 출력!

	- 2차원 배열에 구구단 연산 결과 값만 저장 후 구구단을 출력
		1. int iArrGugu[?][?] = {0, };

		2. 배열에 값을 저장하는 for문
			iArrGugu[?][?] = ?;     <--- 값 저장만 한다. (출력X)
			2,4,6,8,10,12,14,16,18,3,6,9,12,15,...,81

		3. 배열을 이용하여 구구단 결과를 출력하는 for문
			printf("%d * %d = %d\t", ?, ?, iArrGugu[?][?]);
	
	[출력결과]
	2 * 1 = 2	2 * 2 = 4	....
	3 * 1 = 3	3 * 2 = 6	....
	...
	9 * 1 = 9	9 * 2 = 18  ....
*/
