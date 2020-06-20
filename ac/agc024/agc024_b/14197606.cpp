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
	int pos[n];
	REP(i, 0, n){
		int a;
		scanf("%d", &a);
		pos[a-1] = i;
	}
	int r = 0, maxl = 0;
	REP(l, 0, n){
		if(l>r) r = l;
		while(r+1<n and pos[r+1]>pos[r]) r++;
		maxl = std::max<int>(maxl, r-l+1);
	}
	printf("%d
", n-maxl);
	return 0;
}