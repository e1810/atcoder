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
	int n;
	scanf("%d", &n);
	V a;
	int cnt = 0, prev=-1;;
	rep(i, 0, n){
		int tmp;
		scanf("%d", &tmp);
		if(prev!=tmp and prev>=0){
			a.push_back(cnt);
			cnt = 0;
		}
		cnt++;
		prev = tmp;
	}
	if(a.size()==0){
		puts("-1");
		return 0;
	}
	if(a.size()%2) a.push_back(cnt);
	else a[0] += cnt;

	ll ans = 1;
	for(ll i: a) ans = std::max(ans, 1+(i-1)/2);
	printf("%ld
", ans);
	return 0;
}
