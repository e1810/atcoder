#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


ll comb(

int main(){
	ll x, y;
	const int MOD = 1e9+7;
	scanf("%lld %lld", &x, &y);

	if((x+y)%3){
		puts("0");
		return 0;
	}

	ll ytwo = y/2; ll yone = y%2;
	while(ytwo>=0){
		if(ytwo+yone*2 == x) break;
		ytwo -= 1;
		yone += 2;
	}

	/*
	ll n = 1, p = 1;
	for(ll i=ytwo+yone; i>max(ytwo, yone); i--){
		n *= i;
		n %= MOD;
	}
	for(ll i=min(ytwo, yone); i>0; i--){
		cout << p << endl;
		p *= i;
		p %= MOD;
	}
	cout << n << " " << p << endl;
	*/
	printf("%lld\n", comb(ytwo+yone, yone));
	return 0;
}



