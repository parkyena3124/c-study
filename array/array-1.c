#include <stdio.h>

int main(void) {

	int num1[5] = { 10,20,30,40,50 };
	int num2[] = { 10,20,30 }; //묵시적 배열, 초기값 3개[]-> 3 생략
	printf("%d\n", num1[2]); //30 출력, 배열은 0~시작, [5]0-1-2-3-4

	int num3[5]={ 1,2 }; //1 2 0 0 0, 숫자가 크기보다 적을 때 남은 자리에 0이 들어간다
	int num4[5] = { 4 }; //4 0 0 0 0
	int num5[5] = { 0 }; //0 0 0 0 0

	int num6[5];
	num6[0] = 100;
	num6[1] = 200;
	num6[2] = 300;
	num6[3] = 400;
	num6[4] = 500;

	/*printf("%d\n", num6[0]);
	printf("%d\n", num6[1]);
	printf("%d\n", num6[2]);
	printf("%d\n", num6[3]);
	printf("%d\n", num6[4]);*/

	for (int i = 0; i < 5; i++) //0~4, 5번 반복
	{
		printf("%d\n", num6[i]); //배열 요소값 출력(0~4)
	}

	return 0;
}