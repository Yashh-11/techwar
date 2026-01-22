#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)    // j <= i means when i is 1 then j means column then it prints only 1 star in column 
        {
            printf("* ");
        }
        printf("\n");
    }
}