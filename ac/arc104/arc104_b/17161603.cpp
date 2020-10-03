#pragma target("avx")
#pragma optimize("O3")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;
using V = std::vector<ll>;
template<typename T> using pq = std::priority_queue<T>;
template<typename T> using rpq = std::priority_queue<T, std::vector<T>, std::greater<T>>;

#define REP(i,b,e) for(ll i=b; i<e; i++)
#define ALL(vec) vec.begin(),vec.end()
#define PRINT(vec) printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");
#define SCAN(vec) for(auto &i:vec)scanf("%ld",&i)
#define fi first
#define se second

const int MOD = 1e9+7;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int n;
	scanf("%d", &n);
	char s[n+1];
	scanf("%s", s);

	int atcg[4][5050] = {};
	REP(i, 0, n){
		REP(j, 0, 4) atcg[j][i+1] += atcg[j][i];
		if(s[i]=='A') atcg[0][i+1]++;
		if(s[i]=='T') atcg[1][i+1]++;
		if(s[i]=='C') atcg[2][i+1]++;
		if(s[i]=='G') atcg[3][i+1]++;
	}

	int ans = 0;
	REP(i, 0, n) REP(j, i+1, n) {
		int a = atcg[0][j+1]-atcg[0][i];
		int t = atcg[1][j+1]-atcg[1][i];
		int c = atcg[2][j+1]-atcg[2][i];
		int g = atcg[3][j+1]-atcg[3][i];
		if(a==t and c==g) ans++;
	}
	printf("%d
", ans);
	return 0;
}
