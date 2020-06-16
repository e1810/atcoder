#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(ll i=b; i<e; i++)

const int MOD = 1e9+7;

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	std::map<int,int> mp;
	REP(x, b+1, a+1){
		int y = x;
		for(int i=2; i*i<=y; i++){
			while(y%i==0){
				mp[i]++;
				y /= i;
			}
		}
		if(y>1) mp[y]++;
	}
	ll ans = 1;
	for(auto p: mp) ans = ans * (p.second+1) % MOD;
	printf("%ld
", ans);
	return 0;
}
