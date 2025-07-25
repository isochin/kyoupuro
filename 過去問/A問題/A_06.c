#include <stdio.h>

int main(void)
{
	int n, q;
	scanf("%d", &n);
	scanf("%d", &q);
	
	int a[n + 1];
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	
	int s[n + 1];
	s[0] = 0;
	for(int j = 1; j <= n; j++){
		s[j] = s[j - 1] + a[j];
	}
	
	for(int i = 0; i < q; i++){
		int l, r;
		scanf("%d", &l);
		scanf("%d", &r);
		printf("%d\n", s[r] - s[l - 1]);
	}
	
	return 0;
}