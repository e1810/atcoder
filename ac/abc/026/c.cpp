#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll dfs(vector<vector<ll>> infer, ll num, ll sum){
	if(infer[num].empty()) return 1;
	ll mx=0, mn=1e9;
	for(ll a:infer[num]){
		ll tmp = dfs(infer, a, sum);
		mx = tmp>mx? tmp:mx;
		mn = tmp<mn? tmp:mn;
	}
	return mx+mn+1;
}

int main(){
	ll n;
	scanf("%lld", &n);
	vector<vector<ll>> infer(n);
	for(ll i=1; i<n; i++){
		ll b;
		scanf("%lld", &b);
		infer[b-1].push_back(i);
	}

	ll sum = dfs(infer, 0, 0);
	printf("%lld\n", sum);
	return 0;
}
