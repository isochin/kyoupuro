#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	int ans = 0;
	for(int i = 0; i <= n; i++){
		int tmp = 0;
		for(int s = 0; s < n; s++){
			if(i <= a[s]){
				tmp++;
			}
		}
		if(i <= tmp){
			ans = i;
		}
	}
	
	printf("%d\n", ans);

	
	return 0;
}
