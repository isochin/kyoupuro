#include <stdio.h>

int main(void)
{
	char P[100];
	int L;
	
	scanf("%s", P);
	scanf("%d", &L);
	
	int sum = 0;
	for(int i = 0; P[i] != '\0'; i++){
		sum++;
	}
	if(sum >= L){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	
	return 0;
}