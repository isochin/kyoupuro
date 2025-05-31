#include <stdio.h>

int main(void)
{
	int  N, S;
	
	scanf("%d %d", &N, &S);
	
	int T[N];
	for(int i = 0; i < N; i++){
		scanf("%d", &T[i]);
	}
	
	double sum = S + 0.5;
	double num = 0.0;
	for(int i = 0; i < N; i++){
		if((T[i] - num) > sum){
			printf("No\n");
			return 0;
		}
		num = T[i];
	}
	printf("Yes\n");
	
	return 0;
}