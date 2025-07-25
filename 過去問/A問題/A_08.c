#include <stdio.h>

#define MAX 1501

int x[MAX][MAX];
int s[MAX][MAX]; 

int main(void) {
	int h, w;
	scanf("%d %d", &h, &w);
	
	// 入力
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			scanf("%d", &x[i][j]);
		}
	}

	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			s[i][j] = x[i][j] + s[i-1][j] + s[i][j-1] - s[i-1][j-1];
		}
	}

	int q;
	scanf("%d", &q);
	
	for (int k = 0; k < q; k++) {
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		int sum = s[c][d] - s[a-1][d] - s[c][b-1] + s[a-1][b-1];
		printf("%d\n", sum);
	}
	
	return 0;
}
