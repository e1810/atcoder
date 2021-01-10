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
	int n;
	scanf("%d", &n);
	int a[1<<n];
	REP(i, 0, 1<<n) scanf("%d", &a[i]);

	std::vector<int> as[n+1];
	REP(i, 0, 1<<n) as[0].push_back(i);

	REP(i, 0, n){
		for(int j=0; j<as[i].size(); j+=2){
			if(a[as[i][j]]<a[as[i][j+1]]) as[i+1].push_back(as[i][j+1]);
			else as[i+1].push_back(as[i][j]);
		}
	}
	
	if(as[n][0]!=as[n-1][0]) printf("%d
", as[n-1][0]+1);
	else printf("%d
", as[n-1][1]+1);
	return 0;
}
