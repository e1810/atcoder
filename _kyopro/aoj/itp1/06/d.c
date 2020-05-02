#include<stdio.h>

int main(void){
	int h, w;
	scanf("%d %d", &h, &w);
	
	int A[h][w], b[w];
	for(int i=0; i<h; i++) for(int j=0; j<w; j++) scanf("%d", &A[i][j]);
	for(int i=0; i<w; i++) scanf("%d", &b[i]);

	for(int i=0; i<h; i++){
		int sm = 0;
		for(int j=0; j<w; j++) sm += A[i][j] * b[j];
		printf("%d\n", sm);
	}
	return 0;
}
