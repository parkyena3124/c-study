#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//25
int main(void) {
	
	int a;
	int b = 0;

	for (a = 1; a <= 10; a=a+2) {
		b = b + a;
	}
	printf("a는: %d, 합은: %d\n", a, b);

	int c = 1;
	int d = 0;

	while (c<=10) {
		d = d + c;
		c = c + 2;
	}
	printf("c는: %d, 합은: %d", c, d);

	return 0;
}