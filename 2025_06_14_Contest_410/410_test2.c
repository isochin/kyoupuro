#include <stdio.h>

int main(void)
{
	int n, q, x[100];
	
	scanf("%d %d", &n, &q);
	for(int i = 0; i < q; i++){
		scanf("%d", &x[i]);
	}
	
	int box_count[101] = {0};
	int b[q];
	
	for(int j = 0; j < q; j++){
		if(x[j] >= 1){
			b[j] = x[j];
			box_count[x[j]]++;
		}
		else {
			int min_count = 100;
			int min_box = 0;
			for(int s = 1; s <= n; s++){
				if(box_count[s] < min_count){
					min_count = box_count[s];
					min_box = s;
				}
			}
			b[j] = min_box;
			box_count[min_box]++;
		}
	}

	for(int i = 0; i < q; i++){
		printf("%d ", b[i]);
	}
	
	return 0;
}