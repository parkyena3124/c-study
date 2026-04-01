#include <stdio.h>

int digit(int n) { //인수를 n이라는 변수로 바꿈
	if (n < 10)return n; //n이 10보다 작아질 때까지 반복
	return (n % 10) + digit(n / 10); //n을 10으로 나눈 나머지와 n을 10으로 나눔, digit(n)이 10보다 작을때까지 반복
									//digit(n/10)이 10보다 작아졌다면 나눴을 때의 나머지값들과 더함, 함수종료
}
int main() { //시작
	printf("%d", digit(235)); //인수있음(235), 함수가 끝난 후 나온 결과값을 출력
}

//결과: 10