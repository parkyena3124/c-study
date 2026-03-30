#include <stdio.h>
int main() {

	//for (int i = 1; i <= 5; i++)	//행, for문 안에서 변수를 선언할 수 있음
	//{
	//	for (int j = 1; j <= i; j++)	//열
	//	{
	//		printf("*");
	//	}
	//	printf("\n\n");
	//}
	for (int i = 1; i <= 5; i++)	//for(int i=5; i>=1; i--)
	{
		for (int j = 1; j <= 6-i; j++)	//for(int j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n\n");
	}
	return 0;
}
