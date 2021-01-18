#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;

#define REP(i,b,e) for(int i=b; i<e; i++)
#define PRINT(vec) {printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");}
#define fi first
#define se second

const int MOD = 1e9+7;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	ll n, x, m;
	scanf("%ld %ld %ld", &n, &x, &m);

	if(n<m){
		ll ans = x;
		REP(i, 1, n){
			x = x * x % m;
			ans += x;
		}
		printf("%ld
", ans);
		return 0;
	}		

	std::set<ll> used;
	std::vector<ll> as({x});
	ll prev = x,  endx = m;
	REP(i, 0, m){
		ll nx = prev * prev % m;
		prev = nx;
		if(used.count(nx)){
			endx = i;
			break;
		}
		used.insert(nx);
		as.push_back(nx);
	}

	ll ans = 0, lsum = 0, lst = endx;
	REP(i, 0, endx){
		if(as[i]==prev){
			lst = i;
			break;
		}
		ans += as[i];
	}
	REP(i, lst, as.size()) lsum += as[i];

	ll len = as.size() - lst;
	ans += (n-lst) / len * lsum;
	REP(i, lst, lst + (n-lst)%len) ans += as[i];
	
	printf("%ld
", ans);
	return 0;
}
