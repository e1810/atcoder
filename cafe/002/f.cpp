#include<bits/stdc++.h>

int main(){
	int n;
	scanf("%d", &n);
	ll a[n];
	REP(i, 0, n) scanf("%ld", &a[i]);

	ll xsum = 0;
	REP(i, 0, n) xsum ^= a[i];
	REP(i, 0, n) REP(j, 0, n) if(i!=j) {
		ll xr = xsum ^ a[i] ^ a[j];
		ll ad = a[i] + a[j];

	}


