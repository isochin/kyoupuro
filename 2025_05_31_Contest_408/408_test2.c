#include <stdio.h>

int main(void)
{
    int num[100];
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d", &num[i]);
    }

    for(int j = 0; j < N - 1; j++){
        for(int k = j + 1; k < N; k++){
            if(num[j] > num[k]){
                int tmp = num[k];
                num[k] = num[j];
                num[j] = tmp;
            }
        }
    }

    int count = 1;
    for(int l = 0; l < N - 1; l++){
        if(num[l] != num[l+1]){
            count++;
        }
    }

    printf("%d\n", count);
    printf("%d ", num[0]);

    for(int s = 0; s < N - 1; s++){
        if(num[s] != num[s+1]){
            printf("%d ", num[s+1]);
        }
    }

    return 0;
}