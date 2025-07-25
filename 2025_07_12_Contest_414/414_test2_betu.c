#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	
	
	char s[100][100];
	int l[100];
	char c[100][10];
	for(int i = 0; i < n; i++){
		scanf("%s", &c[i]);
		scanf("%d", &l[i]);
	}
	
	if(l[0] < 100){
		printf("Too Long");
		return 0;
	}
	
	int slength = 0;
	for(int j = 0; j < n; j++){
		slenght += l[j];
		if(slenght > 100){
			printf("Too Long");
			return 0;
		}
		for(int k = 0; k < l[j]; k++){
			strcat(s[0], c[j]);
		}
	}
	
	printf("%s\n", s);
	
	return 0;
}