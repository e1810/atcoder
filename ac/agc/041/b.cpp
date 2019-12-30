#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> P;

int main(){
	ll n, m, v, p;
	scanf("%lld %lld %lld %lld", &n, &m, &v, &p);
	ll a[n];
	for(ll i=0; i<n; i++) scanf("%lld", &a[i]);
	sort(a, a+n, greater<ll>());
	for(ll i=0; i<n; i++) printf("%lld ", a[i]);

	ll l=p-1, r=n;
	while(l-r>1){
		ll mid = l+(r-l)/2;
		if(a[p-1]<a[mid]+m){
			r = mid;
			continue;
		}
		if((p-1)+(n-mid)>m*v) l = mid;
		else r = mid;
	}
	printf("%lld\n", l);
	return 0;
}
