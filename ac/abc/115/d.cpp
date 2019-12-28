#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
	ll n, x;
	scanf("%lld %lld", &n, &x);
	ll pty[n], h[n];
	pty[0] = 1; h[0] = 1;
	for(ll i=1; i<=n; i++){
		pty[i] = pty[i-1]*2+1;
		h[i] = h[i-1]*2+3;
	}

	void fun(ll n, ll x){
		if(x<h[n])

	
	printf("%lld\n", ans);
	return 0;
}
