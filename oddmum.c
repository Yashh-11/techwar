// #include <stdio.h>

int main(){
    int num = 1; 
    for (int  i = 1; i <= 4; i++)
    {
        for (int k = 1; k <= 4 - i; k++)
        printf(" ");
        
        for (int j = 1; j <= i; j++)
            printf("%d ",num);
            
            num += 2;
            printf("\n");
    }
    return 0;
}

// #include <stdio.h>

// int main() {
//     int n = 4;
//     int num = 1;

//     for(int i = 1; i <= n; i++) {
//         for(int s = 1; s <= n - i; s++)
//             printf(" ");

//         for(int j = 1; j <= i; j++)
//             printf("%d ", num);

//         num += 2;
//         printf("\n");
//     }
//     return 0;
// }
