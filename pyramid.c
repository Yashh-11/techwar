// // 1st way is  print 2 star in 2 line and 3 star in 3 line and goes in till 5 line

// #include <stdio.h>                                                      


// int main(){
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int k = 1; k <= 5-i; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf(" *");
//         }
//         printf("\n");
//     }
// }

// 2nd way is  print 3 star in 2 line and 5 star in 3 line it print odd number of star in every line
#include <stdio.h>

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= 5-i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
