#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

int main(){
	ll n, m;
	scanf("%ld %ld", &n, &m);
	
	P tmp;
	std::priority_queue<P> que;
	for(ll i=0; i<n; i++){
		scanf("%ld %ld", &tmp.first, &tmp.second);
		que.push(tmp);
	}

	std::vector<ll> value(m);
	for(ll i=m-1; i>=0; i--){
		if(que.empty()) break;
		tmp = que.top(); que.pop();
		if(que.empty()) break;
		while(tmp.first>i+1){
			tmp=que.top();
			que.pop();
			if(que.empty()) break;
		}
		value[i] = tmp.second;
	}
	
	ll ans = 0;
	for(ll i: value) ans += i;
	printf("%ld\n", ans);
	return 0;
}

