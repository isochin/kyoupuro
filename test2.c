#include <stdio.h>

int main(void)
{
    int num1, num2;
    int sum;

    scanf("%d", &num1);
    scanf("%d", &num2);

    sum = num1 * num2;

    if(sum % 2 == 0){
            printf("Even");
    }
        else if(sum % 2 == 1){
            printf("Odd");
        }
    return 0;
}