#include<stdio.h>

int max(int a, int b){
	return a>b? a:b;
}

int main(){
	while(1){
		int n, i, j;
		scanf("%d", &n);
		if(n==0) break;

	
		int grid[3*n][3*n];
		for(i=0; i<3*n; i++) for(j=0; j<3*n; j++) grid[i][j]=0;
		for(i=0; i<n; i++){
			char s[300];
			scanf("%s", s);
			for(j=0; j<n; j++){
				grid[n+i][n+j] = s[j]-'0';
			}
		}
		

		int ans = 0;
		for(i=n; i<n*2; i++){
			int tmp=0;
			for(j=n; j<n*2; j++){
				if(grid[i][j]==1) tmp++;
				else tmp=0;
				ans = max(ans, tmp);
			}
		}
		for(i=n; i<n*2; i++){
			int tmp=0;
			for(j=n; j<n*2; j++){
				if(grid[j][i]==1) tmp++;
				else tmp=0;
				ans = max(ans, tmp);
			}
		}
		int ltor=0, rtol=0;
		for(i=0; i<n*2; i++){
			for(j=0; j<n*2; j++){
				if(grid[n+j][i+j]==1) ltor++;
				else ltor=0;
				if(grid[n+j][3*n-i-j]==1) rtol++;
				else rtol=0;
				ans = max(ans, max(ltor, rtol));
			}
		}

		printf("%d\n", ans);

	}
	return 0;
}

	
