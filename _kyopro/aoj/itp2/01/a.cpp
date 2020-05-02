#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	ll q, t, x;
	scanf("%ld", &q);
	
	std::vector<ll> a(0);
	for(ll i=0; i<q; i++){
		scanf("%ld", &t);
		if(t==0){
			scanf("%ld", &x);
			a.push_back(x);
		}else if(t==1){
			scanf("%ld", &x);
			printf("%ld\n", a[x]);
		}else{
			a.pop_back();
		}
	}
	return 0;
}
