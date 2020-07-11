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
	int b[n+1];
	b[n] = 1e9;
	REP(i, 0, n) scanf("%d", &b[i]);
	
	if(n<3){puts("0");return 0;}
	std::vector<int> a;
	REP(i, 0, n) if(b[i]!=b[i+1]) a.push_back(b[i]);
	n = a.size();

	int ans = 2;
	bool inc = (a[0]<a[1]);
	REP(i, 2, n){
		if(inc && a[i-1]>a[i]){
			ans++;
			inc = false;
		}else if(!inc && a[i-1]<a[i]){
			ans++;
			inc = true;
		}
	}
	
	if(ans<3) puts("0");
	else printf("%d
", ans);
	return 0;
}
