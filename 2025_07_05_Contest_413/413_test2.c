#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	
	char s[100];
	for(int i = 0; i < n; i++){
		scanf("%s", &s[i]);
	}
	
	int ans = 0;
	for(int i = 0; i < n; i++){
		for(int k = 0; k < n; k++){
			if(i != k){
				s[i] + s[k];
				ans++;
			}
		}
	}
	
	printf("%d\n", ans);
	
	return 0;
}