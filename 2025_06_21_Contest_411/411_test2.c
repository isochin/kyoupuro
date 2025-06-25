#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	
	int d[100];
	for(int i = 0; i < n - 1; i++){
		scanf("%d", &d[i]);
	}

	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			int ans = 0;
			for(int k = i; k < j; k++){
			ans += d[k];
		}
			printf("%d", ans);
			if(j < n - 1){
				printf(" ");
			}
			else{
				printf("\n");
			}
		}
	}
	
	return 0;
}