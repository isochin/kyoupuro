#include <stdio.h>

int main(void)
{

    char S[4];

    scanf("%s", S);

    int j = 0;
    for(int i = 0; i < 3; i++){
        if(S[i] == '1'){
            j++;
        }
    }

    printf("%d\n", j);

    return 0;
}