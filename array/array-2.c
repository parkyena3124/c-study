#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#define STUDENTS 5	//기호상수 5 -> STUDENTS

int main(void) {

	int score[STUDENTS]; //5개 선언
	int sum = 0; //누적 변수는 0으로 초기화
	float avg;
	float num = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("성적 입력: ");
		scanf("%d", &score[i]); //score[0]~score[4]에 들어갈 값 입력
		if (score[i] < 0 || score[i] > 100)
		{
			i--;
			continue;
		}
		if (score[i] == 0)
			continue;

		num++;
		sum = sum + score[i]; //sum+=score[i];
	}
	avg = sum / num; //5. 실수 계산

	printf("합계: %d\n", sum);
	printf("평균: %.2f", avg);

	return 0;
}