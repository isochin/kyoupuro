#include <stdio.h>

int main(void)
{
    int a, b, c;
    char str[100];

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%s", str);

    printf("%d %s", a+b+c, str);

    return 0;
}