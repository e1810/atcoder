#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n, u, v;
	vector<vector<ll>> link(n, vector<ll>(0));

	for(ll i=0; i<n; i++){
		ll a, b;
		scanf("%lld %lld", &a, &b);
		link[a-1].push_back(b-1);
		link[b-1].push_back(a-1);
	}

	ll dist[n][n], used[n];
	stack<ll> st;
	st.push(0);
	while(!st.empty()){
		ll apex=st.top(); st.pop();
		for(ll v: link[apex]){
			if(!used[v]) st.push(v);
		}
	}

