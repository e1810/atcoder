#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n;
	scanf("%lld", &n);

	ll fig[n][n];
	for(ll i=0; i<n; i++){
		string s; cin>>s;
		for(ll j=0; j<n; j++) fig[i][j] = s[j];
	}

	ll fig2[n][n];
	for(ll i=0; i<n; i++){
		string s; cin>>s;
		for(ll j=0; j<n; j++) fig2[i][j] = s[j];
	}

	ll ans = 1e18, cnt = 0;
	for(ll i=0; i<n; i++){
		for(ll j=0; j<n; j++){
			if(fig[i][j]!=fig2[i][j]) cnt++;
		}
	}
	ans = min(ans, cnt);

	cnt = 1;
	for(ll i=0; i<n; i++){
		for(ll j=0; j<n; j++){
			if(fig[n-1-j][i]!=fig2[i][j]) cnt++;
		}
	}
	ans = min(ans, cnt);

	cnt = 1;
	for(ll i=0; i<n; i++){
		for(ll j=0; j<n; j++){
			if(fig[j][n-1-i]!=fig2[i][j]) cnt++;
		}
	}
	ans = min(ans, cnt);

	cnt = 2;
	for(ll i=0; i<n; i++){
		for(ll j=0; j<n; j++){
			if(fig[n-1-i][n-1-j]!=fig2[i][j]) cnt++;
		}
	}
	ans = min(ans, cnt);

	printf("%lld\n", ans);
	return 0;
}
