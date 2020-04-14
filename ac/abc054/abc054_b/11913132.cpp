
#include<bits/stdc++.h>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	
	char a[n][n+1], b[m][m+1];
	for(int i=0; i<n; i++) scanf("%s", a[i]);
	for(int i=0; i<m; i++) scanf("%s", b[i]);

	bool can = false;
	for(int i=0; i<n-m+1; i++){
		for(int j=0; j<n-m+1; j++){
			bool ok = true;
			for(int k=0; k<m; k++){
				for(int l=0; l<m; l++){
					if(a[i+k][j+l]!=b[k][l]) ok = false;
				}
			}
			if(ok) can = true;
		}
	}
	
	if(can) puts("Yes");
	else puts("No");
}
