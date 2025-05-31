#include<stdio.h>

int main(){
    int N, S = 0;
    int T[100];
    T[0] = 0;
    scanf("%d %d", &N, &S);
    for(int i = 1; i <= N; i++){
        scanf("%d", &T[i]);
    }

    int count = 0;
    for(int i = 0; i < N; i++){
        double sum = T[i] + S + 0.5;
        if(sum >= T[i + 1]){
            count ++;
        }
    }
    if(count == N){
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}