#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

	int res;
	char a[30];
	char b[30];

	printf("첫번째 단어: ");
	scanf("%s", a); //&: 주소, 배열명은 배열의 첫주소를 가르킴, a[3](배열의 요소)는 &를 붙임
	printf("두번째 단어: ");
	scanf("%s", b);

	res=strcmp(a, b); //문자열 비교
	// res는 0, 음수, 양수
	if (res < 0) //음수이면 문자열1이 문자열2보다 사전순으로 앞에 있음
		printf("%s가 %s보다 앞에 있다\n", a,b);
	else if (res == 0) //반환값이 0이면 완전히 같다
		printf("%s가 %s와 같다", a,b);
	else
		printf("%s가 %s보다 뒤에 있다", a,b); //양수이면 문자열1이 문자열2보다 사전순으로 뒤에 있음
	return 0;
}