#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void)
{
    for (int i = 1; i <= 12; i=i+3)
    {
        printf("   %d 단 \t", i);
        printf("   %d 단 \t", i+1);
        printf("   %d 단\n", i+2);

        for (int j = 1; j <= 9;j++)
        {
            printf("%d * %d = %d\t", i, j, i * j);
            printf("%d * %d = %d\t", i+1, j, (i+1) * j);
            printf("%d * %d = %d\n", i+2, j, (i+2) * j);
        } 
    }
    return 0;
}