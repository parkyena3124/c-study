#include <stdio.h>

int main(void) {
	
	int i = 3000;
	int* p = NULL; //포인터 변수 선언

	p = &i;//i변수의 주소를 p 포인터 변수에 줌

	printf("p=%p\n", p);
	//%p: 주소를 출력하는 서식 문자
	printf("&i=%p\n\n", &i);

	printf("i=%d\n", i);
	printf("*p=%d\n\n", *p);
	//주소에 저장된 내용에 접근하는 포인터
	
	i = 4000;
	printf("i=%d\n", i);
	*p = 5000;
	printf("*p=%d\n\n", *p);
	
	int x = 10, y = 20;
	int *pi; //포인터 변수

	pi = &x; //x주소를 포인터 변수 pi에 준다
	printf("pi=%p\n", pi); //x의 주소를 출력한다
	printf("*pi=%d\n\n", *pi); //x의 값(10)을 출력한다

	pi = &y; //y주소를 포인터 변수 pi에 준다
	printf("pi=%p\n", pi); //y의 주소를 출력한다
	printf("*pi=%d\n\n", *pi); //y의 값(20)을 출력한다

	return 0;
}