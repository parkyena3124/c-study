#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	/*int num, i;
	int sum = 0;

	printf("정수를 입력하세요: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		sum = sum + i;
	}
	printf("합계: %d", sum);*/

	//int num; //입력받을 변수 이름을 선언(정수니까 int로 선언)
	//int sum=1; //반복할 변수 이름을 선언

	//printf("원하는 단은?: "); //어떤 단을 입력받을 것인지 물어보는 질문 출력
	//scanf("%d", &num); //원하는 단을 num이라는 변수에 입력받음
	//printf("<%d 단>\n", num); //입력받은 num으로 몇단인지 제목을 출력함

	//for(sum=1; sum<=9; sum++) //1부터 시작해서 9까지 반복함
	//{
	//	printf("%d*%d=%d\t", sum, num, num*sum ); //입력한 단을 1~9까지 반복하는 동안 곱셈식을 씀, sum이 10이 되기전까지 반복됨
	//}

	int a, b; //변수 선언

	for (a = 2; a <= 9; a++) //a는 단 2~9
	{	//a는 b가 반복이 끝나면 하나 증가
		printf("\n%d단\n", a);
		for (b = 1; b <= 9; b++) //1~9 곱하기 반복
		{
			printf("%d * %d =%-3d\n", a, b, a*b);
		}//j for 끝		//3d -> 3자리
						//원래는 오른쪽 정렬,
						//-을 붙이면 왼쪽 정렬
		b = 1; //b의 반복이 끝나고 a가 1증가하면 b는 다시 1로 초기화되고 다시 반복
	} //i for 끝
	return 0;
}//main 끝
