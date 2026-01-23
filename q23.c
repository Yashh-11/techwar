#include <stdio.h>

int main(){
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int k = 0; k <= 4-i; k++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 5-i; j++)
        {
            printf("*");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("  ");
        }
        for (int j = 1; j <= 5-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}