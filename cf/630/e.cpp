#include<bits/stdc++.h>

int main(){
	int qq;
	scanf("%d", &qq);
	for(int qqq=0; qqq<qq; qqq++){
		int n;
		scanf("%d", &n);
		int b[26][n+2];
		for(int i=0; i<26; i++) memset(b[i], 0, sizeof(b[i]));

		for(int i=0; i<n; i++){
			int tmp;
			scanf("%d", &tmp);
			b[tmp-1][i+1]++;
		}
		for(int i=0; i<26; i++) for(int j=1; j<n+1; j++) b[i][j] += b[i][j-1];
		
		int ans = 0;
		for(int i=0; i<n+1; i++) for(int j=i; j<n+1; j++){
			int y = 0;
			for(int k=0; k<26; k++) y = std::max(y, b[k][j]-b[k][i]);
			int x = 0;
			for(int k=0; k<26; k++){
				int l = b[k][i], r = b[k][n] - b[k][j];
				if(l==r) x = std::max(x, l);
			}
			ans = std::max(ans, y+x*2);
		}
		
		printf("%d\n", ans);
	}
	return 0;
}
