#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll n, m; scanf("%lld %lld", &n, &m);
	vector<vector<ll>> is_f(n, vector<ll>(n, 0));
	for(ll i=0; i<m; i++){
		ll a, b; scanf("%lld %lld", &a, &b);
		is_f[a-1][b-1] = 1;
		is_f[b-1][a-1] = 1;
	}

	for(ll i=0; i<n; i++){
		vector<ll> is_ff(n);
		for(ll j=0; j<n; j++){
			if(is_f[i][j]){
				for(ll k=0; k<n; k++){
					if(is_f[j][k] and !is_f[i][k] and k!=i) is_ff[k] = 1;
				}
			}
		}
		printf("%lld\n", accumulate(is_ff.begin(), is_ff.end(), 0LL));
	}
	return 0;
}
