#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(ll i=b; i<e; i++)

int main(){
	int q;
	scanf("%d", &q);
	while(q--){
		int n;
		scanf("%d", &n);
		std::map<ll,int> mp;
		REP(i, 0, n){
			int a;
			scanf("%d", &a);
			mp[a]++;
		}
		bool ok = true;
		for(auto [k, v]: mp){
			if(v%2) ok = false;
		}
		if((n&1)^ok) puts("Second");
		else puts("First");
	}
	return 0;
}
