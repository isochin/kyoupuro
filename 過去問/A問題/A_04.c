#include <stdio.h>

int main(void)
{
	int n;
	int b[100];
	
	scanf("%d", &n);
	
	for(int i = 0; i < 10; i++){
		if(n % 2 == 1){
			b[i] = 1;
			n = n / 2;
		}
		else if(n % 2 == 0){
			b[i] = 0;
			n = n / 2;
		}
	}
	
	for(int j = 0; j < 10; j++){
		printf("%d", b[10 - 1 - j]);
	}
	
	return 0;
}