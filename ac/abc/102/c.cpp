#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ll n, tmp;
	scanf("%lld", &n);
	vector<ll> a(n);
	for(ll i=0; i<n; i++) scanf("%lld", &tmp), a[i]=tmp-i-1;
	sort(a.begin(), a.end());
	ll b = a[n/2], ans = 0;
	for(ll i: a) ans += abs(i-b);
	printf("%lld\n", ans);
	return 0;
}
