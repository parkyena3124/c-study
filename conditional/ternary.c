//삼항연산자 : if~else를 간결히 표현
//조건 ? A:B => 조건이 참(A) : 거짓(B)

#include <stdio.h>

int main(void) {
	
	/*int a = 10, b = 20;
	int max;
	max = a > b ? a : b;
	printf("%d", max);*/

	int num;

	printf("정수입력: ");
	scanf_s("%d", &num);
	num % 2 == 0 ? printf("짝수") : printf("홀수");
	//삼항연산자, 입력받은 숫자를 2로 나눴을 때 나머지가 0인지에 따라서
	//맞으면 왼쪽을 출력하고 아니면 오른쪽을 출력함

	return 0;
}