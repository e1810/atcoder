#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n, m, d;
	scanf("%lld %lld %lld", &n, &m, &d);

	vector<string> fig(m);
	for(int i=0; i<n; i++) cin>>fig[i];

	vector<ll> hor(0);
	for(int i=0; i<n; i++){
		ll tmp = 0;
		for(int j=0; j<m; j++){
			if(fig[i][j]=='.') tmp++;
			else{
				hor.push_back(tmp);
				tmp = 0;
			}
		}
		hor.push_back(tmp);
	}


	vector<ll> ver(0);
	for(int i=0; i<m; i++){
		ll tmp = 0;
		for(int j=0; j<n; j++){
			if(fig[j][i]=='.') tmp++;
			else{
				ver.push_back(tmp);
				tmp = 0;
			}
		}
		ver.push_back(tmp);
	}

	ll ans = 0;
	for(ll i: hor) if(i-d>=0) ans += i-d+1;
	for(ll i: ver) if(i-d>=0) ans += i-d+1;
	printf("%lld\n", ans);
	return 0;
}

