#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll a, b; scanf("%lld %lld", &a, &b);
	ll limit = sqrt(max(a,b));
	vector<ll> so(limit+1, 1); so[0]=0;
	for(ll i=2; i<=limit; i++){
		if(a%i or b%i) so[i]=0;
		if(so[i]){
			for(ll j=i*2; j<=limit; j+=i) so[j]=0;
		}
	}
	printf("%lld\n", accumulate(so.begin(), so.end(), 0LL));
	return 0;
}

