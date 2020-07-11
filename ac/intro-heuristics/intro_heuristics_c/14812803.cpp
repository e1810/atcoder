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

int d, t[370];
ll c[26], s[370][26], last[370][26];


ll calc(){
	ll score = 0;
        REP(i, 1, d+1){
                REP(j, 0, 26){
                        if(j==t[i]-1){
                                score += s[i][j];
                                last[i][j] = i;
                        }else last[i][j] = last[i-1][j];
                        score -= c[j] * (i - last[i][j]);
                }
        }
	return score;
};

int main(){
        scanf("%d", &d);
        REP(i, 0, 26) scanf("%ld", &c[i]);
        REP(i, 1, d+1) REP(j, 0, 26) scanf("%ld", &s[i][j]);
        REP(i, 1, d+1) scanf("%d", &t[i]);
        REP(i, 0, 1+d) REP(j, 0, 26) last[i][j] = 0;

	int m;
	scanf("%d", &m);
	REP(I, 0, m){
		int st, nex;
		scanf("%d %d", &st, &nex);
		t[st] = nex;
		printf("%ld
", calc());
//		int pre = t[st];
//		REP(i, last[st-1][pre], st){
//			score -= c[pre] * (last[i][pre] - last[st-1][pre]);
//			last[i][pre] = last[st-1][pre];
//		}
//		for(ll i=st; i<=d and st>=last[i][nex]; i++){
//			score += c[nex] * (st - last[i][nex]);
//			last[i][nex] = st;
//		}
//		printf("%ld
", score);
	}
	return 0;
}
