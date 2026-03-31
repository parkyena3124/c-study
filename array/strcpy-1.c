#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //#include: 전처리기, 입출력 관련 헤더파일
#include <string.h> //문자열 함수 사용위한 헤더파일
int main(void) {

	char a[10] = "hello"; //h->a[0], 자동적으로 null값이 들어감
	printf("%s\n", a);
	printf("%c\n", a[0]);

	char b[10]; //자동으로 null값이 들어가지않음
	//b = "love"; 오류
	strcpy(b, "love"); //문자열 복사(대상, 문자열)
	//b[0] = 'l';
	//b[1] = 'o';
	//b[2] = 'v';
	//b[3] = 'e';
	printf("%s\n", b);

		//strcpy: 문자배열을 선언 이후 뒤에 초기화가 안됨
					//이후 문자열 복사할 때

		return 0;
} 