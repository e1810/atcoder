#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t; scanf("%lld", &t);
	for(ll i=0; i<t; i++){
		ll n; scanf("%lld", &n);
		ll a[n];
		for(ll j=0; j<n; j++) scanf("%lld", &a[j]);


		ll b[n];
		for(ll j=0; j<n; j++) b[j] = -a[j];
		for(ll j=0; j<n; j++) 
			
