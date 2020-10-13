#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=(b);i<(e);i++)
using ll = int_fast64_t;

int main(){
	ll h, w, n;
	scanf("%ld %ld %ld", &h, &w, &n);
	ll u[n], v[n], x[n];
	REP(i, 0, n) scanf("%ld %ld %ld", &u[i], &v[i], &x[i]);

	std::vector<ll> links[n];
	ll in[n] = {};
	REP(i, 0, n) REP(j, 0, n) if(i!=j) {
		if(u[i]<=u[j] && v[i]<=v[j]){
			links[i].push_back(j);
			in[j]++;
		}
	}

	std::queue<ll> que;
	REP(i, 0, n) if(in[i]==0) que.push(i);

	ll val[n] = {};
	REP(i, 0, n) val[i] = x[i];

	while(!que.empty()){
		ll now = que.front();
		que.pop();
		for(ll to: links[now]){
			val[to] = std::max(val[to], val[now] + x[to]);
			if(--in[to]==0) que.push(to);
		}
	}

	ll ans = 0;
	REP(i, 0, n) ans = std::max(ans, val[i]);
	printf("%ld\n", ans);
	return 0;
}



