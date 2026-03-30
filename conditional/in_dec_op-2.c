#include <stdio.h>

int main() {

	int a, b, c;
	a = 5 % 3; //나머지 a=2
	a--; //a=1
	b = (a++) + 3; //b=4, a=1 -> a=2
	printf("%d, %d \n", a, b); //2,4
	c = (++a) + 3; //a=3, c=6
	printf("%d, %d, %d", a, b, c); // 3, 4, 6

}