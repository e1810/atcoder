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
	V a(n);
	SCAN(a);
	std::sort(ALL(a));
	
	V fac(n+1);
	fac[0] = fac[1] = 1;
	REP(i, 2, n+1) fac[i] = fac[i-1] * i % MOD;

	ll time = 0, pena = 0, ans = 1;
	int prev = 0, cnt = 0;
	for(int x: a){
		if(x==prev) cnt++;
		else{
			ans = ans * fac[cnt] % MOD;
			cnt = 1;
		}
		time += x;
		pena += time;
		prev = x;
	}
	ans = ans * fac[cnt] % MOD;
	printf("%ld
%ld
", pena, ans);
	return 0;
}
