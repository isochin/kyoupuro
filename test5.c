#include <stdio.h>

int main(void)
{
    int A, B, C, X;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &X);

    int i, j , s;
    int sum = 0;
    for(i = 0; i <= A; i++){
        for(j = 0; j <= B; j++){
            for(s = 0; s <= C; s++){
                if(i * 500 + j * 100 + s * 50 == X){
                    sum++;
                }
            }
        }
    }

    printf("%d", sum);

    return 0;
}