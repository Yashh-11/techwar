#include <stdio.h>

int main()
{
    int num = 1;
    for (int i = 1; i <= 4; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= 4; j++)
                printf("%2d ", num++);
        }
        else
        {
            int temp = num + 4 - 1;
            for (int j = 1; j <= 4; j++)
                printf("%2d ", temp--);
            num += 4;
        }
        printf("\n");
    }
}