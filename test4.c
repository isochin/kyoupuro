#include <stdio.h>

int main(void)
{
    int N, A;
    int count = 1000;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d", &A);

        int tmp = 0;

        while(A % 2 == 0){
            tmp++;
            A /= 2;
        }

        if(tmp < count){
            count = tmp;
        }
    }

    printf("%d", count);
    return 0;
}
