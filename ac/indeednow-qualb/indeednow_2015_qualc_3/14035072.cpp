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
	std::vector<int> links[n+1];
	REP(i, 0, n-1){
		int a, b;
		scanf("%d %d", &a, &b);
		links[a].push_back(b);
		links[b].push_back(a);
	}

	std::vector<int> ans;
	bool used[n+1] = {};
	rpq<int> que;
	que.push(1);
	while(!que.empty()){
		int from = que.top();
		que.pop();
		ans.push_back(from);
		used[from] = true;
		for(int to: links[from]){
			if(!used[to]) que.push(to);
		}
	}
	REP(i, 0, n){
		printf("%d", ans[i]);
		putchar( i==n-1? '
':' ');
	}
	return 0;
}
