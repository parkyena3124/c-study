//1~100 합 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//int i=2;	//초기값 1~100 수
	//int	sum = 0;	//합계 누적할 변수

	//while (i <= 100)
	//{
	//	//printf("%d\n", i);
	//	//sum = sum + i;	//sum+=1;	//+100
	//	//i = i + 2;	//i+=1; //i++;	//101
	//}
	//printf("1~100의 짝수 합은: %d", sum);

	int num, i = 0;

	printf("양의 정수 입력 : ");
	scanf("%d", &num);	//5입력

	while (i < num)	//5탈출
	{
		printf("handaman!\n");
		i++;	//1씩 증가
	}

	return 0;

}