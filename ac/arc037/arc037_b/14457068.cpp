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
	int n, m;
	scanf("%d %d", &n, &m);
	std::vector<int> links[n];
	REP(i, 0, m){
		int a, b;
		scanf("%d %d", &a, &b);
		links[a-1].push_back(b-1);
		links[b-1].push_back(a-1);
	}

	int ans = 0;
	bool used[n] = {};
	std::queue<int> que;
	REP(i, 0, n) if(!used[i]) {
		bool ok = true;
		que.push(i);
		while(!que.empty()){
			int from = que.front(), cnt = 0;
			que.pop();
			if(used[from]){
				ok = false;
				continue;
			}
			used[from] = true;
			for(int to: links[from]){
				if(!used[to]) que.push(to);
				else cnt++;
			}
			if(cnt>1) ok = false;
		}
		if(ok) ans++;
	}
	
	printf("%d
", ans);
	return 0;
}
