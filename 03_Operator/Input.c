// Input.c
/*
	화면(콘솔)에서 글씨 출력 : printf()
	화면에서 글씨 출력 : scanf()

	scanf("입력형식", 입력받을 장소(공간, 변수));
		입력받을 장소 : &변수명
			> &를 변수명에 붙인다. --> 변수의 주소값
			> 일단 변수명 앞에 &를 꼭 붙인다고 생각하자

		>> scanf를 사용한다는 것은 화면에서 입력한 내용을 특정 변수에 값으로 저장
			변수에 저장을 하려면 그 변수의 집주소를 찾아가서 직접 넣어줘야 한다.
*/

#include <stdio.h>

void main() {
	int iNum = 0;
	int iNum1 = 0;
	int iNum2 = 0;
	printf("숫자 입력 : "); // \n을 사용하지 않음.
	scanf_s("%d", &iNum); /* & 필수, iNum 공간의 주소를 알려줘야 한다.
		%d를 사용했다는 것은 입력된 값을 정수로 변환하여 iNum에 넣겠다는 의미
		%f를 사용했다면 float, double 변수에 실수 값으로 넣겠다는 의미

		(1) scanf()가 사용되면 값을 입력할 때까지(엔터) 입력 대기 상태가 된다.
		입력 대기 상태 : 프로그램이 종료되지 않고 실행 중인 상태
		(2) scanf()의 첫번째 문자열 안에는 \n을 사용하지 않는다.
		\n은 콘솔 출력 시 깔끔하게 출력하기 위해 사용하는 것.
	*/
	printf("입력한 숫자는 %d입니다.\n", iNum);

	printf("두 수 입력 : ");
	scanf("%d %d", &iNum1, &iNum2); // 순서대로 나열, 주소에 &필수
	printf("두 수의 합은 %d입니다\n", (iNum1 + iNum2));
	/*
		1) 10 20이라고 입력을 하면, '키보드 버퍼'라는 공간에 "10 20"이라는 내용이 문자열로 저장됨
			> 키보드 버퍼 : 우리가 입력한 내용들이 저장되는 임시 공간
		2) scanf()함수가 키보드 버퍼에서 "%d %d" 형식에 맞게 값을 가져온다.

			> 만약 "%d, %d"라고 써놨으면 입력할 때도 "10, 20" 형태로 입력해줘야 한다.
			> "10 20"이라고 입력했다면, 처음 %d는 10을 가져오지만 콤마(,)가 없어 그 뒤는 가져올 수 없다.
	*/
}