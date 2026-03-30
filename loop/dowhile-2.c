#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int i = 0;

	do {
		
		printf("1. 새로 만들기\n");
		printf("2. 파일 열기\n");
		printf("3. 파일 닫기\n");

		printf("하나를 입력하세요: ");
		scanf("%d", &i);
	
	} while (i<1 || i>3); //i가 1~3 아니면 반복

	printf("선택 메뉴는 : %d", i);
	
	return 0;
}