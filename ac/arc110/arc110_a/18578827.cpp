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
	int n;
	scanf("%d", &n);
	std::map<ll,ll> mp;
	REP(i, 2, n+1){
		int x = i;
		std::map<ll,ll> tmp;
		for(int j=2; j*j<=x; j++){
			while(x%j==0){
				tmp[j]++;
				x /= j;
			}
		}
		if(x>1) tmp[x]++;
		for(auto [k,v]: tmp) mp[k] = std::max(mp[k], v);
	}

	ll ans = 1;
	for(auto [k,v]: mp){
		REP(i, 0, v) ans *= k;
	}
	printf("%ld
", ans+1);
	return 0;
}
