#include <stdio.h>

int main(void)
{
	int X, Y;
	// %d, %dだと入力の時に 〇, 〇にしないと読み込まない
	// 入力例だと〇 〇なので %d %d って書くと良い
	scanf("%d, %d", &X, &Y);

	int s;
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
	
	printf("%.10f\n", count / 36);
	
	return 0;
}
