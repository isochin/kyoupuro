#include <stdio.h>

int main(void)
{
	int n;
	int a[101];
	int x;
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	scanf("%d", &x);
	
	for(int i = 0; i < n; i++){
		if(a[i] == x){
		printf("Yes\n");
			return 0;
		}
	}
	
	printf("No\n");
	
	return 0;
}