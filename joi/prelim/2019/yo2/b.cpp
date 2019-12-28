#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;

int main(){
	ll n;
	scanf("%lld", &n);
	P at[n];
	for(ll i=0; i<n; i++) scanf("%lld %lld", &at[i].first, &at[i].second);
	sort(at, at+n);
	
	ll now = max(at[n-1].first, at[n-1].second);
	for(ll i=n-2; i>=0; i--){
		now += at[i+1].first - at[i].first;
		now = max(now, at[i].second);
	}
	now += at[0].first;
	printf("%lld\n", now);
	return 0;
}
