#include<cstdio>

int main(){
	int n;
	scanf("%d", &n);
	char img[n][n+1];
	for(int i=0; i<n; i++) scanf("%s", img[i]);

	int q, r = 0;
	scanf("%d", &q);
	while(q--){
		int x;
		scanf("%d", &x);
		r = (r + x + 4) % 4;
	}

	char ans[n][n+1];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(r==0) ans[i][j] = img[i][j];
			if(r==1) ans[i][j] = img[n-1-j][i];
			if(r==2) ans[i][j] = img[n-1-i][n-1-j];
			if(r==3) ans[i][j] = img[j][n-1-i];
		}
		ans[i][n] = '\0';
	}

	for(int i=0; i<n; i++) printf("%s\n", ans[i]);
	return 0;
}
