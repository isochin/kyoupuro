#include <stdio.h>

int main(void)
{
	int n;
	char t[100],  a[100];
	
	scanf("%d", &n);
	scanf("%s", t);
	scanf("%s", a);
	
	for(int i = 0; i < n; i++){
		if(t[i] == 'o' && a[i] == 'o'){
			printf("Yes\n");
			return 0;
		}
	}
	
	printf("No\n");
	return 0;
}