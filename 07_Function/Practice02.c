
#include <stdio.h>

int SelectLanguage();

void main()
{
	/*
		출력결과가 나오도록 함수 완성하기
			> main()함수 내부 내용은 절대로 수정하지 않습니다!!
		
		[출력결과]
		1. C언어
		2. JAVA
		3. PYTHON
		공부할 언어 코드를 입력하세요 : 1
		선택한 언어 코드는 1번 입니다.
	*/

	int iLanguage = 0;

	iLanguage = SelectLanguage(); // 변수에 대입되었다는 말은 함수에 return 값이 있다는 것을 의미

	printf("선택한 언어 코드는 %d번 입니다.\n", iLanguage);
}

int SelectLanguage()
{
	int i = 0;
	printf("1. C언어\n2. JAVA\n3. PYTHON\n");
	printf("공부할 언어 코드를 입력하세요 : ");
	scanf("%d", &i);

	// 1번 방법
	if (i == 1)
	{
		return 1;
	}
	else if (i == 2)
	{
		return 2;
	}
	else if (i == 3)
	{
		return 3;
	}
	else
	{
		do {
			printf("다시 입력하세요 : ");
			scanf("%d", &i);
		} while (i < 1 || i > 3);
		if (i == 1)
		{
			return 1;
		}
		else if (i == 2)
		{
			return 2;
		}
		else if (i == 3)
		{
			return 3;
		}
	}

	// 2번 방법
	do {
		if (i < 1 || i > 3)
		{
			printf("다시 입력하세요 : ");
			scanf("%d", &i);
		}
		if (i == 1)
		{
			return 1;
		}
		else if (i == 2)
		{
			return 2;
		}
		else if (i == 3)
		{
			return 3;
		}
	} while (i < 1 || i > 3);

	// 3번 방법
	for (;;)
	{
		if (i < 1 || i > 3)
		{
			printf("다시 입력하세요 : ");
			scanf("%d", &i);
		}
		if (i == 1)
		{
			return 1;
		}
		else if (i == 2)
		{
			return 2;
		}
		else if (i == 3)
		{
			return 3;
		}
	}

	// 4번 방법
	while (i < 1 || i > 3)
	{
		printf("다시 입력하세요 : ");
		scanf("%d", &i);
	}
	if (i == 1)
	{
		return 1;
	}
	else if (i == 2)
	{
		return 2;
	}
	else if (i == 3)
	{
		return 3;
	}
}