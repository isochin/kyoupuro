#include <stdio.h>

int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);
	
	int a[100];
	int ans = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		ans += a[i];
	}

	if(ans <= m){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	
	return 0;
}