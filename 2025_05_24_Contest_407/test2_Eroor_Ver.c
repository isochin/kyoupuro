#include <stdio.h>

int main(void)
{
	int X, Y, s;
	scanf("%d, %d", &X, &Y);

	double count = 0;
	for(int i = 1; i <= 6; i++){
		for(int j = 1; j <= 6; j++){
			if(i >= j){
				s = i - j;
			}
			else{
				s = j - i;
			}
			if(i + j >= X || s >= Y){
				count++;
			}
		}
	}
	
	printf("%.10f\n", count / 36.0);
	
	return 0;
}
