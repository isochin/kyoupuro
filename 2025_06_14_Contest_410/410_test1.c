#include <stdio.h>

int main(void)
{
	int N, K;
	int a[100];
	int count = 0;
	
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &K);
	
	for(int j = 0; j < N; j++){
		if(a[j] >= K){
			count++;
		}
	}
	
	printf("%d\n", count);
	
	return 0;
}