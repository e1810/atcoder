#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;

int main(){
	ll n;
	scanf("%lld", &n);
	vector<P> a(n);

	ll prev = -1;
	for(ll i=0; i<n; i++){
		ll tmp;
		scanf("%lld", &tmp);
		if(prev==tmp) n--, i--;
		else a[i] = {tmp, 0};
		prev = tmp;
	}

	if(n==1){
		if(a[0].first==0)printf("%d\n", 0);
		else printf("%d\n", 1);
		return 0;
	}
	
	if(a[0]>a[1]) a[0].second = 1;
	for(ll i=1; i<n-1; i++){
		if(a[i-1]>a[i] && a[i]<a[i+1]) a[i].second = -1;
		else if(a[i-1]<a[i] && a[i]>a[i+1]) a[i].second = 1;
	}
	if(a[n-2]<a[n-1]) a[n-1].second = 1;
	sort(a.begin(), a.end(), greater<P>());

	ll ans = 1, land = 0;
	for(ll i=0; i<n; i++){
		land += a[i].second;
		if(i==n-1 || a[i].first!=a[i+1].first) ans = max(ans, land);
	}
	printf("%lld\n", ans);
	return 0;
}
