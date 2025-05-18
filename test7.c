#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	
	int i;
	int a[N];
	for(i = 0; i < N; i++){
		scanf("%d", &a[i]);
	}
	
	int tmp;
	int s, t;
	for(s = 0; s < N-1; s++){
		for(t = s + 1; t < N; t++){
			if(a[t] > a[s]){
				tmp = a[t];
				a[t] = a[s];
				a[s] = tmp;
			}
		}
	}
	
	int num = 0;
	int sum = 0;
	for(i = 0; i < N; i++){
		if(i % 2 == 0){
			num += a[i];
		}
		else{
			sum += a[i];
		}
	}
	
	printf("%d", num - sum);
	
	return 0;
}