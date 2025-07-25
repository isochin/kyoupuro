#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	
	
	char count[100][100];
	int l[100];
	char c[100];
	for(int i = 0; i < n; i++){
		scanf("%s", &c[i]);
		scanf("%d", &l[i]);
		count[i] = c[i];
		if(l[i] > 1){
			for(int j = 1; j < l[i]; j++){
				count[i] = c[i];
			}
		}
	}
	
	for(int k = 0; k < n; k++){
		strcat(count[k],count[k + 1]);
	}

	printf("%s\n", count);
	
	return 0;
}