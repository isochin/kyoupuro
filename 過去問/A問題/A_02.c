#include <stdio.h>

int main(void)
{
	int n, x;
	int a[100];
	
	scanf("%d %d", &n, &x);

	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	for(int j = 0; j < n; j++){
		if(x == a[j]){
			printf("Yes\n");
			return 0;
		}
	}
	
	printf("No\n");
	
	return 0;
}