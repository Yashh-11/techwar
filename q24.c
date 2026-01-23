#include <stdio.h>

int main(){
    for (int i = 0; i < 5; i++)
    {
        for (int k = 1; k <= 5-i; k++)
        {
            printf(" ");
        }
        int num = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",num);
            num = num * (i-j)/(j + 1);
        }
        printf("\n");
    }
    
}