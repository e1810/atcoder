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
	int l, r, u, d, x;
	l = r = u = d = x = 0;
	char c;
	while((c=getchar())!='
'){
		if(c=='L') l++;
		if(c=='R') r++;
		if(c=='U') u++;
		if(c=='D') d++;
		if(c=='?') x++;
	}
	
	int t, h = abs(l-r), v = abs(u-d);
	scanf("%d", &t);
	if(t==1) printf("%d
", h + v + x);
	else{
		if(h+v>x) printf("%d
", h+v-x);
		else printf("%d
", (x-h-v)%2);
	}
	return 0;
}
