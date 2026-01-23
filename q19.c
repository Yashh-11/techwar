#include <stdio.h>

int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || i == 2 && j == 2 || i == 3 && j == 3  ||  i == 4 && j == 4  || i == 5)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
}