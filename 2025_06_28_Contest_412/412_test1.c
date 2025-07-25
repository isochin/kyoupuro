#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	
	int a[100], b[100];
	for(int i = 0; i < n; i++){
		scanf("%d %d", &a[i], &b[i]);
	}
	
	int num = 0;
	for(int i = 0; i < n; i++){
		if(a[i] < b[i]){
			num++;
		}
	}
	
	printf("%d\n", num);
	
	return 0;
}