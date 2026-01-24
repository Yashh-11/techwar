#include <stdio.h>

int main()
{
    for (int i = 0; i <= 5; i++)
    {
        for (int k = 0; k <= 5 - i; k++)
        {
            printf(" ");
        }
        int num = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", num);
            num += 2;
        }
        printf("\n");
    }
}