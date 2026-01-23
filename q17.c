// #include <stdio.h>

// int main(){
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int k = 1; k <= 4-i; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%c",'A'+ j - 1);
//         }
//         for (int h = i-1; h >= 1; h--)
//         {
//             printf("%c",'A'+ h - 1);    
//         }
//         printf("\n");
//     }
    
// }   

// 2nd way 

#include <stdio.h>

int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= 5-i; k++)
        {
            printf(" ");
        }
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            printf("%c",ch);
            ch++;
        }
        ch = ch-2;
        for (int j = 1; j <= i-1; j++)
        {
            printf("%c",ch);
            ch--;
        }
        printf("\n");
    }
    
}