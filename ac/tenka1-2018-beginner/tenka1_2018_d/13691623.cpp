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
	if(n==1){
		puts("Yes
2");
		puts("1 1
1 1");
		return 0;
	}

	int sum = 0;
	REP(k, 0, 1000){
		sum += k;
		if(sum-k!=n) continue;
		std::vector<V> ans(k, V(0));
		int cnt = 1;
		REP(i, 0, k) REP(j, i+1, k) {
			ans[i].push_back(cnt);
			ans[j].push_back(cnt);
			cnt++;
		}
		printf("Yes
%ld
", k);
		for(auto vec: ans){
			printf("%ld", vec.size());
			for(int x: vec) printf(" %d", x);
			puts("");
		}
		return 0;
	}
	puts("No");
	return 0;
}
