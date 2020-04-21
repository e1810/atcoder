
#pragma target("avx")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using V = std::vector<ll>;
template<typename T> using pq = std::priority_queue<T>;
template<typename T> using rpq = std::priority_queue<T, std::vector<T>, std::greater<T>>;

#define rep(i,b,e) for(ll i=b; i<e; i++)
#define be(vec) vec.begin(),vec.end()
#define print(vec) printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");
#define scan(vec) for(auto &i:vec)scanf("%ld",&i)
#define fi first
#define se second

const int MOD = 1e9+7;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int c[3][3];
	bool ok = false;
	rep(i, 0, 9) scanf("%d", &c[i/3][i%3]);
	rep(i, 0, 101) rep(j, 0, 101) rep(k, 0, 101){
		bool flag = true;
		rep(x, 0, 3){
			if(c[0][x]-i!=c[1][x]-j or c[1][x]-j!=c[2][x]-k) flag = false;
		}
		ok |= flag;
	}
	if(ok) puts("Yes");
	else puts("No");
	return 0;
}
