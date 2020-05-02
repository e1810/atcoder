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

std::vector<int> ans;
void dfs(int x){
	rep(i, 1, x+1){
		if(i*(i+1)/2>=x){
			ans.push_back(i);
			if(i>1) dfs(x-i);
			break;
		}
	}
	return;
}

int main(){
	int n;
	scanf("%d", &n);
	dfs(n);
	for(int a: ans) printf("%d
", a);
	return 0;
}
