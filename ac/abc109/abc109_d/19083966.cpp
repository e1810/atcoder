#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;

#define REP(i,b,e) for(int i=b; i<e; i++)
#define PRINT(vec) {printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");}
#define fi first
#define se second

const int MOD = 1e9+7;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int h, w;
	scanf("%d %d", &h, &w);
	int a[h][w];
	REP(i, 0, h) REP(j, 0, w) scanf("%d", &a[i][j]);

	std::vector<std::vector<int>> anss;
	REP(i, 0, h){
		if(i%2){
			if(a[i-1][w-1]%2){
				anss.push_back({i, w, i+1, w});
				a[i-1][w-1]--;
				a[i][w-1]++;
			}
			for(int j=w-2; j>=0; j--){
				if(a[i][j+1]%2){
					anss.push_back({i+1, j+2, i+1, j+1});
					a[i][j+1]--;
					a[i][j]++;
				}
			}
		}else{
			if(i && a[i-1][0]%2){
				anss.push_back({i, 1, i+1, 1});
				a[i-1][0]--;
				a[i][0]++;
			}
			for(int j=1; j<w; j++){
				if(a[i][j-1]%2){
					anss.push_back({i+1, j, i+1, j+1});
					a[i][j-1]--;
					a[i][j]++;
				}
			}
		}
	}
	printf("%ld
", anss.size());
	for(auto v: anss){
		printf("%d %d %d %d
", v[0], v[1], v[2], v[3]);
	}
	return 0;
}
