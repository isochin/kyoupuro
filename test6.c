#include <stdio.h>

int calculation(int num)
{
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main(void)
{
    int N, A, B;
    int total = 0;

    scanf("%d %d %d", &N, &A, &B);

	int i;
    for (i = 1; i <= N; i++) {
        int sum = calculation(i);  
        if (sum >= A && sum <= B) {
            total += i;  
        }
    }


    printf("%d\n", total);

    return 0;
}
