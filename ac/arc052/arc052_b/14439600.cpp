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
	int n, q;
	scanf("%d %d", &n, &q);
	double wa[20100] = {};
	REP(I, 0, n){
		double x, r, h;
		scanf("%lf %lf %lf", &x, &r, &h);
		REP(i, 0, h){
			wa[(int)x+i] += (r-(r/h)*i)*(r-(r/h)*i) * (h-i) - (r-(r/h)*(i+1))*(r-(r/h)*(i+1)) * (h-i-1);
		}
	}

	//REP(i, 0, 20) printf("%lf ", wa[i] * M_PI / 3.0);

	REP(I, 0, q){
		int a, b;
		scanf("%d %d", &a, &b);
		double ans = 0;
		REP(i, a, b) ans += wa[i];
		printf("%lf
", ans * M_PI / 3.0);
	}
	return 0;
}
