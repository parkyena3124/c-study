#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num, cnt = 0, i;
	
	printf("원하는 배수 입력: ");
	scanf("%d", &i);	//i는 원하는 배수의 숫자	//3
	printf("배수의 개수 입력: ");
	scanf("%d", &num);	//보여지는 배수의 개수 num=5 입력
	
	while (cnt++ < num)	
		//0<5 조건 물어보고 참=> 다음문장 가기전에 cnt +1증가 -> cnt 1이 됨
		//1<5 조건 물어보고 참=> 다음문장 가기전에 cnt +1증가 -> cnt 2이 됨
		//2<5 조건 물어보고 참=> 다음문장 가기전에 cnt +1증가 -> cnt 3이 됨
		//3<5 조건 물어보고 참=> 다음문장 가기전에 cnt +1증가 -> cnt 4이 됨
		//4<5 조건 물어보고 참=> 다음문장 가기전에 cnt +1증가 -> cnt 5이 됨
		//5<5 조건 물어보고 거짓=> 탈출

		printf("%d ", i * cnt);
				//	3*1
				//	3*2
				//	3*3
				//	3*4
				//	3*5
	//cnt 0
	//cnt 1
	//cnt 2
	//cnt 3
	//cnt 4

				// 5*1
				// 5*2	
				// 5*3
				// 5*4
	//cnt 0
	//cnt 1
	//cnt 2
	//cnt 3

}