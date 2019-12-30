#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n, m;
	scanf("%lld %lld", &n, &m);
	ll a[n];
	for(ll i=0; i<n; i++) scanf("%lld", &a[i]);
	sort(a, a+n, greater<ll>());

	
