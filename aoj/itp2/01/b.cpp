#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	ll n, t, d, x;
	scanf("%ld", &n);

	std::deque<ll> deq;
	for(ll i=0; i<n; i++){
		scanf("%ld %ld", &t, &d);
		if(t==0){
			scanf("%ld", &x);
			if(d) deq.push_back(x);
			else deq.push_front(x);
		}else if(t==1){
			printf("%ld\n", deq[d]);
		}else{
			if(d) deq.pop_back();
			else deq.pop_front();
		}
	}
	return 0;
}
