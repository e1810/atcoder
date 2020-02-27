#include<stdio.h>

int main(void){
	int r, c;
	scanf("%d %d", &r, &c);
	int table[r+1][c+1];
	for(int i=0; i<r; i++){
		int sm = 0;
		for(int j=0; j<c; j++){
			scanf("%d", &table[i][j]);
			sm += table[i][j];
		}
		table[i][c] = sm;
	}
	for(int j=0; j<=c; j++){
		int sm = 0;
		for(int i=0; i<r; i++){
			sm += table[i][j];
		}
		table[r][j] = sm;
	}
	
	for(int i=0; i<=r; i++){
		for(int j=0; j<=c; j++){
			printf("%d", table[i][j]);
			if(j==c) putchar('\n');
			else putchar(' ');
		}
	}
	return 0;
}
