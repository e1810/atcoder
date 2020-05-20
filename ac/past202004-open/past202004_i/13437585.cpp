#pragma target("avx")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
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
	int m = 1 << n;
	V a(m);
	SCAN(a);

	int lost[m] = {};
	REP(i, 0, n){
		int l = -1, r = -1;
		REP(j, 0, m){
			if(lost[j]) continue;
			if(l<0) l = j;
			else if(r<0){
				r = j;
				if(a[l]>a[r]) lost[r] = i+1;
				else lost[l] = i+1;
				l = r = -1;
			}
		}
	}

	REP(i, 0, m){
		if(lost[i]) printf("%d
", lost[i]);
		else printf("%d
", n);
	}
	return 0;
}
