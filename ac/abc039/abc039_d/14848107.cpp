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
	int h, w;
	scanf("%d %d", &h, &w);
	char pic[2+h][2+w], ans[2+h][2+w], chk[2+h][2+w];
	REP(i, 0, 2+h) REP(j, 0, 2+w) pic[i][j] = chk[i][j] = '#';
	REP(i, 1, 1+h){
		getchar();
		REP(j, 1, 1+w){
			pic[i][j] = getchar();
			chk[i][j] = '.';
		}
	}

	REP(i, 1, 1+h) REP(j, 1, 1+w) {
		int cnt = (pic[i][j]=='#');
		REP(k, 0, 8){
			cnt += (pic[i+dx[k]][j+dy[k]]=='#');
		}
		if(cnt==9) ans[i][j] = '#';
		else ans[i][j] = '.';
	}

	REP(i, 1, 1+h) REP(j, 1, 1+w) if(ans[i][j]=='#') {
		chk[i][j] = '#';
		REP(k, 0, 8) chk[i+dx[k]][j+dy[k]] = '#';
	}
	bool ok = true;
	REP(i, 0, 2+h) REP(j, 0, 2+w) if(pic[i][j]!=chk[i][j]) {
		ok = false;
	}

	if(ok){
		puts("possible");
		REP(i, 1, 1+h){
			REP(j, 1, 1+w) putchar(ans[i][j]);
			putchar('
');
		}
	}else puts("impossible");
	return 0;
}
