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
	int a, b, c, d, e, f;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

	bool sugar[3001]={}, water[3001]={};
	sugar[0] = water[0] = true;
	REP(i, 0, 3001){
		if(sugar[i]){
			if(i+c<3001) sugar[i+c] = true;
			if(i+d<3001) sugar[i+d] = true;
		}
		if(water[i]){
			if(i+100*a<3001) water[i+100*a] = true;
			if(i+100*b<3001) water[i+100*b] = true;
		}
	}

	double max = -1;
	P ans;
	REP(i, 0, 3001) REP(j, 0, 3001){
		if(i+j>f) break;
		if(!sugar[i] or !water[j] or j/100*e<i) continue;
		double tmp = 100 * i / (double)(i+j);
		if(tmp>max){
			max = tmp;
			ans = P(i+j, i);
		}
	}
	printf("%ld %ld
", ans.fi, ans.se);
	return 0;
}
