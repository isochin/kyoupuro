#include <stdio.h>

int main(void)
{
	int n;
	int k;
	
	scanf("%d", &n);
	scanf("%d", &k);
	
	int ans = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(k - i - j > 0 && k - i - j <= n){
					ans++;
			}
		}
	}
	
	printf("%d\n", ans);
		
	return 0;
}