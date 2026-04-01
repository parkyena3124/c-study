#include <stdio.h>

int main() {

	int a[5] = { 9,1,7,3,5 };
	int i, j, min, t;

	for (i = 0; i < 4;i++) { //4보다 작을 때까지 반복, (순서정렬)
		min = i; //반복하는 동안 min에 i 대입

		for (j = i + 1;j < 5;j++) { //5보다 작을 때까지 반복, (a[5]에서 작은 값 찾는 반복
			if (a[j] < a[min]) //a[j]가 a[min]보다 작으면 min에 j대입
				min = j;
		}

		t = a[i]; //a[i]를 t에 대입, (순서정렬)
		a[i] = a[min]; //a[min]를 a[i]에 대입
		a[min] = t; //t를 a[min]에 대입
	}
	for (i = 0;i < 5;i++) { //5보다 작을때까지 반복, 5개의 숫자출력(0~4)
		printf("%2d", a[i]); //%2d 2자리차지해서 한자릿수라 한 칸씩 띄어서 출력됨
	}
}
//결과: 1 3 5 7 9