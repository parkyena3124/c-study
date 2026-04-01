#include <stdio.h>
int main(void) {

	int a = 4;
	switch (a) {
	case 5:
		printf("A");
	case 3:
		printf("B");
	case 1:
		printf("C");
	default:
		printf("D");
	}
}
//결과: D