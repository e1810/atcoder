#include<bits/stdc++.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n*n];
	for(int i=0; i<n*n; i++) scanf("%d", &a[i]);
	std::sort(a, a+n*n);

	int ans[n][n], pos = 0;
	for(int i=0; i<n*n; i++){
		int I = 0, J = i;
		if(J>=n){
			I = J - n + 1;
			J = n - 1;
		}
		while(I<n and 0<=J){
			ans[I][J] = a[pos++];
			I++, J--;
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", ans[i][j]);
		}
		puts("");
	}

	return 0;
}
