#include <stdio.h>

int num(char *x, char *y, int s);

int main(void)
{
	int n;
	scanf("%d", &n);
	
	char t[n], a[n];
	scanf("%s", t);
	scanf("%s", a);
	
	int ans = 0;
	
	ans =  num(t, a, n);
	
	if(ans == 1){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	
	return 0;
}

int num(char *x, char *y, int s)
{
	for(int i = 0; i < s; i++){
		if(x[i] == 'o' && y[i] == 'o'){
			return 1;
		}
	}
	return 0;
}