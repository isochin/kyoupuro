#include <stdio.h>

int main(void)
{
	int a, b;
	double sum;
	
	scanf("%d %d", &a, &b);
	
	sum = (double)a / b;
	int anser = (int)(sum + 0.5);
	
	printf("%d", anser);
	
	return 0;
}