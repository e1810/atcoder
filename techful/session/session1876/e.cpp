#include<cstdio>
#include<algorithm>

int main(){
	int n;
	scanf("%d", &n);
	int h[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &h[i][j]);
		}
	}

	int p[n];
	for(int i=0; i<n; i++) p[i] = i;

	int ans = 1e9;
	do{
		int max = 0, min = 1e9;
		for(int i=0; i<n; i++){
			max = std::max(max, h[i][p[i]]);
			min = std::min(min, h[i][p[i]]);
		}
		ans = std::min(ans, max-min);
	}while(std::next_permutation(p, p+n));

	printf("%d\n", ans);
	return 0;
}

