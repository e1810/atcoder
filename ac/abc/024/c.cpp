#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ll n, d, k;
	scanf("%lld %lld %lld", &n, &d, &k);
	vector<pair<ll, ll>> lr(d);
	for(ll i=0; i<d; i++) scanf("%lld %lld", &lr[i].first, &lr[i].second);
	
	for(ll i=0; i<k; i++){
		ll s, t;
		scanf("%lld %lld", &s, &t);
		
		ll j = 0;
		for(pair<ll,ll> P: lr){
			j++;
			if(P.first<=s && s<=P.second){
				if(P.first<=t && t<=P.second){
					printf("%lld\n", j);
					break;
				}else{
					s = s<t? P.second:P.first;
				}
			}
		}
	}
	return 0;
}
