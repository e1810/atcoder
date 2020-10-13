#include<cstdio>
#include<algorithm>

int main(){
	int h, w;
	scanf("%d %d", &h, &w);

	int a[h][w];
	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			scanf("%d", &a[i][j]);
		}
	}

	int maxs[h+w] = {};
	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			maxs[i+j] = std::max(maxs[i+j], a[i][j]);
		}
	}

	int ans = 0;
	for(int i=0; i<h+w; i++) ans += maxs[i];
	printf("%d\n", ans);
	return 0;
}
