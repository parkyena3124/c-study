#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void){

	float a, b, c;

	printf("3명의 점수를 입력하시오: ");
	scanf("%f %f %f",&a, &b, &c);

	printf("합계: %0.f\n", a + b + c);
	printf("평균: %.2f", (a + b + c) / 3);

	return 0;
}
