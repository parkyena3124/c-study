#include <stdio.h>

int main() {

	int val1 = 10, val2 = 12;
	int result1, result2, result3;

	result1 = (val1 == 10 && val2 == 12); //val=10 참, val2=12 참
	result2 = (val1 < 12 || val2 > 12); //10<12 참, 12>12 거짓 || 둘다 거짓이면 거짓 하나라도 참이면 참
	result3 = (!val1); //반대
	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);

	return 0;
}