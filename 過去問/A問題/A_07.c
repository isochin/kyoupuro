#include <stdio.h>

int main(void)
{
	int d, n;
	scanf("%d", &d);
	scanf("%d", &n);
	
	int ans[d + 2];
	for(int i = 0; i <= d + 1; i++)
	ans[i] = 0;
	
	for(int j = 0; j < n; j++){
		int l, r;
		scanf("%d %d", &l, &r);
		ans[l]++;
		ans[r + 1]--;
	}
	
	for(int k = 1; k <= d; k++){
		ans[k] += ans[k - 1];
	}
	
	for(int l = 1; l <= d; l++){
		printf("%d\n", ans[l]);
	}
	
	return 0;
}