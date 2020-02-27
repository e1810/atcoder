#include<stdio.h>

int main(void){
	int n;
	scanf("%d", &n);
		
	int m[4][3][10] = {0};
	for(int i=0; i<n; i++){
		int b, f, r, v;
		scanf("%d %d %d %d", &b, &f, &r, &v);
		m[b-1][f-1][r-1] += v;
	}
	
	for(int i=0; i<4; i++){
		if(i) puts("####################");
		for(int j=0; j<3; j++){
			for(int k=0; k<10; k++){
				printf(" %d", m[i][j][k]);
			}
			puts("");
		}
	}
	return 0;
}
