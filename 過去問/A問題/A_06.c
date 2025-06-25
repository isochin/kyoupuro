#include <stdio.h>

int main(void)
{
	int n, q;
	scanf("%d", &n);
	scanf("%d", &q);
	
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	int ans[q];
	int l[q], r[q];
	for(int i = 0; i < q; i++){
		scanf("%d", &l[i]);
		scanf("%d", &r[i]);
		ans[i] = a[l[i]] + a[r[i]];
	}
	
	for(int j = 0; j < q; j++){
		printf("%d\n", ans[j]);
	}
	
	return 0;
}