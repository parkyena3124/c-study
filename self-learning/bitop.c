#include <stdio.h>
int main(void) {

	int a = 8;
	printf("%d %d %d", a << 1, a >> 1, a & 3);

	return 0;
}
//결과 16, 4, 0