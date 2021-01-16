#pragma GCC target("avx")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)
using ll = int_fast64_t;
using P = std::pair<std::string,ll>;

ll hashing(std::string s){
	ll ret = 0, p = 1;
	for(char c: s){
		ret += p * (c-'A');
		p *= 3;
	}
	return ret;
}


ll cnt[2000000];
int main(){
	int n, q;
	scanf("%d %d", &n, &q);

	REP(i, 0, 1<<n) REP(j, 0, 1<<n) if((i&j)==0) {
		std::string s;
		REP(k, 0, n){
			s += "ABC"[((i>>k)&1)*2 + ((j>>k)&1)];
		}
		cnt[hashing(s)] = 1e18;
	}
	
	std::queue<P> que;
	REP(i, 0, n+1) REP(j, 0, n+1) REP(k, 0, n+1) if(i+j+k==n) {
		std::string s = std::string(i, 'A');
		s += std::string(j, 'B');
		s += std::string(k, 'C');
		que.emplace(s, 0);
	}
	
	ll x = 0;
	while(!que.empty()){
		auto [s, d] = que.front(); que.pop();
		ll sh = hashing(s);
		if(cnt[sh]<=d) continue;
		cnt[sh] = d;
		std::string t = s;
		REP(i, 1, n){
			REP(j, 0, i) std::swap(t[i-j-1], t[i-j]);
			if(cnt[hashing(t)] > cnt[sh]+1) que.emplace(t, d+1);
		}
	}

	while(q--){
		std::string s;
		std::cin >> s;
		printf("%ld\n", cnt[hashing(s)]);
	}
	return 0;
}
