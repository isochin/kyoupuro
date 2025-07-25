#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	
	int l, r;
	scanf("%d %d", &l, &r);
	
	int x[100], y[100];
	int count = 0;
	for(int i = 0; i < n; i++){
		scanf("%d %d", &x[i], &y[i]);
		if(l >= x[i] && r <= y[i]){
			count++;
		}
	}
	
	printf("%d\n", count);
	
	return 0;
}