#include <stdio.h>

int main(void)
{
	int n, l, r;
	
	scanf("%d %d %d", &n, &l, &r);
	
	char s[100];
	
	scanf("%s", s);

	for(int i = l; i <= r; i++){
		if(s[i - 1] == 'x'){
			printf("No\n");
			return 0;
		}
	}
	
	printf("Yes\n");
	
	return 0;
}
