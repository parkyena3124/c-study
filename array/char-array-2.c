#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
int main(void)
{
    int i;
    char fruits[3][20];

    for (i = 0; i < 3; i++) //0~2
    {
        printf("과일 이름을 입력하세요: "); //menu[i]는 행을 의미
        scanf("%s", fruits[i]);

        printf("%d번째 과일은? : %s \n", i+1, fruits[i]);
    }

    return 0;
}