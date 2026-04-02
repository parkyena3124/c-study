#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a=10, b=20;
	int c[5] = { 1,2,3,4,5 }; //배열
	
	int q=add(a, b); //함수 호출, 인수 2개->더할라고
	sub(a, b); //함수 호출, 인수 2개->뺄라고
	printf("%d\n", q);

	arr_prn(c); //함수호출
	return 0;
}

int add(int a,int b) { //매개변수: 형을 선언
	int k;
	k = a + b;
	return k; //30 반환
}

void sub(int x, int y) {
	int j = x - y;
	printf("%d\n", j);
}

void arr_prn(int i[5]) {
	for(int t=0; t<5; t++)
		printf("%d\n", i[t]);
}