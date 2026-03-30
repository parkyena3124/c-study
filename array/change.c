#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {

	int a, b, c, d, f, e;
	printf("물건값과 투입금액: ");
	scanf("%d %d", &a, &b);

	//46200 50000
	printf("5000원: %d개\n", a/5000);
	c = a / 5000;
	c= c * 5000;
	printf("1000원: %d개\n",  (a-c)/1000);
	d = (a - c) / 1000;
	d = d * 1000;
	printf("100원: %d개\n", (a-(d+c))/100);
	f = ((a - (d + c))/100);
	f = f * 100;
	e = a -(d + c + f);
	printf("잔돈1: %d\n", e);
	printf("잔돈2: %d", b-a);

	return 0;
}