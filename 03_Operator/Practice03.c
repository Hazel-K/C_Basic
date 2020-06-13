/*
	국어,영어,수학 세 과목의 점수를 입력 받고,
	총점과 평균을 출력하세요. (평균은 소수점 이하 1자리까지)
	
	[출력결과]
	국어,영어,수학 점수를 차례로 입력하세요 : 97 86 95
	총점 : 278점
	평균 : 92.7점
*/

#include <stdio.h>
void main() {
	/*
	float fNum1 = 0;
	float fNum2 = 0;
	float fNum3 = 0;
	printf("국어, 영어, 수학 점수를 차례로 입력하세요 : ");
	scanf("%f %f %f", &fNum1, &fNum2, &fNum3);
	printf("총점 : %.0f점\n평균 : %.1f점\n", (fNum1 + fNum2 + fNum3), ((fNum1 + fNum2 + fNum3) / 3));
	*/
	int iKor, iEng, iMath, iTotal = 0;
	printf("국어, 영어, 수학 점수를 차례로 입력하세요 : ");
	scanf("%d %d %d", &iKor, &iEng, &iMath);
	iTotal = iKor + iEng + iMath;
	printf("총점 : %d점\n평균 : %.1f점\n", iTotal, (iTotal / 3.0)); // 3.0 대신 (float)으로 형변환 하든지.
}